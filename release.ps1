# Use this Powershell script to push releases
$version = "v1.1.0" 
$commit  = "all mks constants and prefixes added"
Write-Output $version > version.tag 
git add . && git commit -m "$commit" && git push origin && gh release create $version --title "$version" --notes "$commit"
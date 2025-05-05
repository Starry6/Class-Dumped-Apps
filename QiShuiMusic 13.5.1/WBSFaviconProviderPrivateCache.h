@interface WBSFaviconProviderPrivateCache : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)imageDataForPageURLString:;
- (id)imageDataForIconURLString:;
- (id)firstImageDataMatchingPageURLStringIn:matchedPageURLString:;
- (id)pageURLStringsWithPrefixesIn:;
- (id)imageInfoForPageURLString:;
- (id)imageInfoForIconURLString:;
- (void)setImageData:forPageURLString:iconURLString:iconSize:hasGeneratedResolutions:;
- (void)setIsRejectedResource:forPageURLString:iconURLString:;
- (id)rejectedResourceInfosForPageURLString:iconURLString:;
- (BOOL)linkPageURLString:toIconURLString:;
- (void)removeImageDataForPageURLString:;
- (void)removeAllImageDataWithCompletionHandler:;
@end

@interface SKTextureAtlasPacker : NSObject
- (id)copyRotateCGImage:direction:;
- (id)calcNonAlphaArea:;
- (BOOL)isFullyOpaque:;
- (id)partitionTextureFilesByResolution:;
- (id)getTextureFileList:modDate:;
- (id)generateMetaData;
- (id)processPackedTextureAtlas:suffix:packer:sortedTrimArray:sortedTextureArray:;
- (void)generateTextureAtlasImages:outputDictionary:forcePOT:;
+ (id)copyProcessedImageSource:;
@end

@interface DCMarkupUtilities : NSObject
+ (id)imageDataWithMarkupModelData:sourceImageData:;
+ (id)imageDataWithMarkupModelData:sourceImageData:embedData:;
+ (id)imageDataWithMarkupModelData:sourceImageURL:;
+ (BOOL)hasPrivateImageMetadata:;
+ (id)cleanImageMetadataFromData:;
+ (id)createMarkupViewController;
+ (id)createProcessingMarkupViewControllerOutWindow:;
+ (id)markupModelDataFromDataAtURL:;
+ (id)markupModelDataFromData:;
+ (id)dataToEditForDocumentInfo:imageCache:includeMarkupModelData:;
+ (id)dataToEditForDocumentInfo:includeMarkupModelData:imageCache:embedMarkupModelDataInImage:;
+ (void)applyMarkupModelData:documentInfo:completionBlock:;
+ (void)applyReturnedMarkupURL:documentInfo:completionBlock:;
+ (void)extractReturnedMarkupURL:documentInfo:completionBlock:;
@end

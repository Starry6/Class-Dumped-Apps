@interface QLPreviewProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)beginRequestWithExtensionContext:;
- (void)providePreviewForFileRequest:completionHandler:;
@end

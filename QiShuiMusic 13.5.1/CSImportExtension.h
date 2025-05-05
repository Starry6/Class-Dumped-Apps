@interface CSImportExtension : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)beginRequestWithExtensionContext:;
- (BOOL)updateAttributes:forFileAtURL:error:;
@end

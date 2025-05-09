@interface UITextPasteItem : NSObject
@property (nonatomic) NSItemProvider itemProvider;
@property (nonatomic) @ localObject;
@property (nonatomic) NSDictionary defaultAttributes;
@property (nonatomic) UITextPasteCoordinator coordinator;
@property (nonatomic) NSArray supportedPasteConfigurationClasses;
@property (nonatomic) BOOL forcesDefaultAttributes;
@property (nonatomic) NSDictionary documentOptions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLocalObject:;
- (void)setDefaultAttributes:;
- (id)defaultAttributes;
- (id)coordinator;
- (id)localObject;
- (void).cxx_destruct;
- (id)itemProvider;
- (void)setNoResult;
- (void)setStringResult:;
- (void)setAttributedStringResult:;
- (void)setAttachmentResult:;
- (void)setDefaultResult;
- (void)setItemProvider:;
- (id)initWithTextPasteCoordinator:;
- (id)supportedPasteConfigurationClasses;
- (void)setSupportedPasteConfigurationClasses:;
- (BOOL)forcesDefaultAttributes;
- (void)setForcesDefaultAttributes:;
- (id)documentOptions;
- (void)setDocumentOptions:;
@end

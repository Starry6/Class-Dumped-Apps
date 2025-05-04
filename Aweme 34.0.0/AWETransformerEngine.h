@interface AWETransformerEngine : NSObject
@property (nonatomic) NSString requestID;
- (id)allCardTemplateDictsWithDSLString:;
- (id)caculateTransformerSizeWithRootElement:;
- (id)transformerCardElementWithJSONString:;
- (id)transformerElementWithDSLJSONString:globalParams:;
- (id)transformerRootViewWithRootElement:;
- (id)transformerRootViewWithRootElement:cardCache:delegate:;
- (id)requestID;
- (void)setRequestID:;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
+ (id)version;
@end

@interface AWEFeedFlowControllerInfo : MTLModel
@property (nonatomic) BOOL showFlow;
@property (nonatomic) NSString flowButtonIconURL;
@property (nonatomic) NSString flowButtonExtra;
@property (nonatomic) NSDictionary dictionaryValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)showFlow;
- (void)setShowFlow:;
- (id)flowButtonIconURL;
- (void)setFlowButtonIconURL:;
- (id)flowButtonExtra;
- (void)setFlowButtonExtra:;
- (void).cxx_destruct;
+ (id)flowControllerInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface AWEYAPRetainCompletionData : MTLModel
@property (nonatomic) NSDictionary serverParams;
@property (nonatomic) NSDictionary teaParams;
@property (nonatomic) NSDictionary uiParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)serverParams;
- (id)uiParams;
- (void)setUiParams:;
- (void)setServerParams:;
- (id)teaParams;
- (void)setTeaParams:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end

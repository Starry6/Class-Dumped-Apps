@interface AWEVideoSpecificTagModel : MTLModel
@property (nonatomic) q tagID;
@property (nonatomic) NSString tagName;
@property (nonatomic) q tagLevel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)tagLevel;
- (long long)tagID;
- (void).cxx_destruct;
- (id)tagName;
- (void)setTagName:;
+ (id)JSONKeyPathsByPropertyKey;
@end

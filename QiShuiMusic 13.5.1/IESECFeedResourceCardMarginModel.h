@interface IESECFeedResourceCardMarginModel : MTLModel
@property (nonatomic) q top;
@property (nonatomic) q left;
@property (nonatomic) q right;
@property (nonatomic) q bottom;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)top;
- (void)setTop:;
- (long long)left;
- (long long)bottom;
- (long long)right;
- (void)setBottom:;
- (void)setLeft:;
- (void)setRight:;
+ (id)JSONKeyPathsByPropertyKey;
@end

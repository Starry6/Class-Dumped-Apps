@interface AWEDTOGameModel : MTLModel
@property (nonatomic) BOOL isGame;
@property (nonatomic) q type;
@property (nonatomic) q score;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isGame;
- (void)setIsGame:;
- (void)setScore:;
- (long long)score;
- (long long)type;
- (void)setType:;
+ (id)JSONKeyPathsByPropertyKey;
@end

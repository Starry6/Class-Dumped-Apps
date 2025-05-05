@interface SASportsMatchupLineScore : AceObject
@property (nonatomic) NSString period;
@property (nonatomic) NSString score;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)score;
- (id)encodedClassName;
- (void)setScore:;
- (id)period;
- (void)setPeriod:;
+ (id)matchupLineScore;
+ (id)matchupLineScoreWithDictionary:context:;
@end

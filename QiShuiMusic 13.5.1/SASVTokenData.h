@interface SASVTokenData : AceObject
@property (nonatomic) NSNumber endTimeMillis;
@property (nonatomic) float score;
@property (nonatomic) NSNumber startTimeMillis;
@property (nonatomic) NSString text;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (float)score;
- (void)setText:;
- (id)encodedClassName;
- (void)setScore:;
- (id)text;
- (id)endTimeMillis;
- (void)setEndTimeMillis:;
- (id)startTimeMillis;
- (void)setStartTimeMillis:;
+ (id)tokenData;
+ (id)tokenDataWithDictionary:context:;
@end

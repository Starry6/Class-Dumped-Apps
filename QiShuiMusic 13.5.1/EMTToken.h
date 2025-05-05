@interface EMTToken : NSObject
@property (nonatomic) NSString text;
@property (nonatomic) float confidence;
@property (nonatomic) float score;
@property (nonatomic) BOOL precededBySpace;
@property (nonatomic) BOOL followedBySpace;
- (float)confidence;
- (float)score;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)text;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithText:confidence:precededBySpace:followedBySpace:;
- (id)initWithText:confidence:score:precededBySpace:followedBySpace:;
- (BOOL)precededBySpace;
- (BOOL)followedBySpace;
@end

@interface TextToken : NSObject
@property (nonatomic) NSString string;
@property (nonatomic) double score;
@property (nonatomic) NSArray features;
@property (nonatomic) NSInteger wordID;
@property (nonatomic) Q properties;
- (id)string;
- (double)score;
- (unsigned long long)properties;
- (void).cxx_destruct;
- (id)features;
- (int)wordID;
- (id)initWithString:score:features:wordID:properties:;
@end

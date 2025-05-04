@interface AWESearchScanImageIntentModel : NSObject
@property (nonatomic) NSString flag;
@property (nonatomic) NSArray keys;
@property (nonatomic) NSString intent;
@property (nonatomic) NSString text;
- (BOOL)verifyWithAWEAwemeModel:;
- (id)getIntentData;
- (void)setKeys:;
- (void)setFlag:;
- (id)init;
- (void)setText:;
- (id)text;
- (id)flag;
- (id)intent;
- (id)keys;
- (void).cxx_destruct;
- (void)setIntent:;
- (id)initWithDictionary:;
@end

@interface TITraceLogRecordContextEntry : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) NSString wordID;
- (id)token;
- (void)setToken:;
- (void).cxx_destruct;
- (id)initWithToken:wordID:;
- (id)wordID;
- (void)setWordID:;
@end

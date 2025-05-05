@interface CKSignpost : NSObject
@property (nonatomic) NSObject<OS_os_log> log;
@property (nonatomic) Q identifier;
- (id)init;
- (id)log;
- (unsigned long long)identifier;
- (void).cxx_destruct;
- (id)initWithLog:;
+ (id)signpost;
@end

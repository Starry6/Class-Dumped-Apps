@interface HIDUserDevice : NSObject
@property (nonatomic) I service;
- (id)initWithProperties:;
- (void)cancel;
- (void)dealloc;
- (void)setDispatchQueue:;
- (void)setCancelHandler:;
- (BOOL)setProperty:forKey:;
- (unsigned int)service;
- (id)propertyForKey:;
- (void).cxx_destruct;
- (id)description;
- (void)activate;
- (BOOL)handleReport:error:;
- (void)setGetReportHandler:;
- (void)setSetReportHandler:;
- (BOOL)handleReport:withTimestamp:error:;
@end

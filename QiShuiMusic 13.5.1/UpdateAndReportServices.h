@interface UpdateAndReportServices : NSObject
@property (nonatomic) BOOL update;
@property (nonatomic) BOOL report;
@property (nonatomic) @? block;
- (id)block;
- (void)dealloc;
- (BOOL)update;
- (void)setBlock:;
- (BOOL)report;
- (id)initWithServices:needToReport:service:;
@end

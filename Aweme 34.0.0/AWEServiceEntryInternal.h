@interface AWEServiceEntryInternal : NSObject
@property (nonatomic) @ innerService;
@property (nonatomic) BOOL available;
- (void)available:unavailable:;
- (void)setInnerService:;
- (id)innerService;
- (id)initWithProtocolEntry:available:;
- (BOOL)available;
- (void)setAvailable:;
- (void).cxx_destruct;
+ (id)serviceEntry:;
+ (id)serviceClassEntry:;
@end

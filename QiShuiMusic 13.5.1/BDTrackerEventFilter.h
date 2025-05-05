@interface BDTrackerEventFilter : NSObject
@property (nonatomic) BOOL isBlock;
@property (nonatomic) NSSet events;
@property (nonatomic) NSDictionary params;
- (id)filterTrackWithEvent:isV1:;
- (void)setIsBlock:;
- (BOOL)isBlock;
- (id)initWithDictionary:;
- (void)setEvents:;
- (void).cxx_destruct;
- (id)events;
- (id)params;
- (void)setParams:;
@end

@interface AWELiveBookingResponse : MTLModel
@property (nonatomic) AWELiveBookingStatus bookingStatus;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString logID;
- (id)bookingStatus;
- (void)setBookingStatus:;
- (void).cxx_destruct;
- (id)logID;
- (void)setLogID:;
+ (id)bookingStatusJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end

@interface VCRateControlShareProfile : NSObject
@property (nonatomic) I reservedBitrate;
@property (nonatomic) I rateSharingCount;
- (id)copyWithZone:;
- (unsigned int)reservedBitrate;
- (void)setReservedBitrate:;
- (unsigned int)rateSharingCount;
- (void)setRateSharingCount:;
@end

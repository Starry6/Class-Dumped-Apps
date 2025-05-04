@interface AWELeftSideBarBadgeEnterInfoModel : NSObject
@property (nonatomic) NSString identification;
@property (nonatomic) NSString entryBadgeComponentID;
@property (nonatomic) double entryBadgeLastDotTime;
@property (nonatomic) NSDictionary bizTrackParams;
- (void)setIdentification:;
- (id)bizTrackParams;
- (void)setBizTrackParams:;
- (id)entryBadgeComponentID;
- (void)setEntryBadgeComponentID:;
- (void)setEntryBadgeLastDotTime:;
- (double)entryBadgeLastDotTime;
- (void).cxx_destruct;
- (id)identification;
@end

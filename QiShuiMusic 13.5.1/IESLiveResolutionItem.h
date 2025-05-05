@interface IESLiveResolutionItem : NSObject
@property (nonatomic) NSString resolutionTitleString;
@property (nonatomic) NSString extra;
@property (nonatomic) BOOL isPaidResolution;
@property (nonatomic) BOOL hasPaidResolution;
@property (nonatomic) UIImage tagImage;
@property (nonatomic) BOOL disable;
- (BOOL)hasPaidResolution;
- (BOOL)isDisable;
- (BOOL)isPaidResolution;
- (id)resolutionTitleString;
- (void)setDisable:;
- (void)setExtra:;
- (void)setHasPaidResolution:;
- (void)setIsPaidResolution:;
- (void)setResolutionTitleString:;
- (void)setTagImage:;
- (id)tagImage;
- (id)extra;
- (void).cxx_destruct;
@end

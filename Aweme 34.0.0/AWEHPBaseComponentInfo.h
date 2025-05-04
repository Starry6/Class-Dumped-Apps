@interface AWEHPBaseComponentInfo : NSObject
@property (nonatomic) double showTimestamp;
@property (nonatomic) double CAMediaShowTimeStamp;
@property (nonatomic) double hideTimestamp;
@property (nonatomic) NSString componentID;
@property (nonatomic) BOOL hasEnterConsum;
@property (nonatomic) BOOL isShowing;
- (double)CAMediaShowTimeStamp;
- (void)setCAMediaShowTimeStamp:;
- (void)setHideTimestamp:;
- (void)setHasEnterConsum:;
- (BOOL)hasEnterConsum;
- (double)hideTimestamp;
- (BOOL)isShowing;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setComponentID:;
- (id)componentID;
- (void)setShowTimestamp:;
- (double)showTimestamp;
- (void)setIsShowing:;
@end

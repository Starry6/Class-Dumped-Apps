@interface IESLiveMyLiveTabCellViewModel : NSObject
@property (nonatomic) HTSLiveMyLiveTabItem metaData;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (nonatomic) BOOL topCorners;
@property (nonatomic) BOOL bottomCorners;
@property (nonatomic) NSString cellIdentifier;
@property (nonatomic) BOOL spaceOnly;
@property (nonatomic) NSString bizName;
- (id)bizName;
- (BOOL)bottomCorners;
- (id)initWithMetaData:;
- (void)setBizName:;
- (void)setBottomCorners:;
- (void)setCellIdentifier:;
- (void)setSpaceOnly:;
- (void)setTopCorners:;
- (BOOL)spaceOnly;
- (BOOL)topCorners;
- (double)usercardWidth;
- (void)setMetaData:;
- (void)setWidth:;
- (double)height;
- (id)metaData;
- (double)width;
- (void)setHeight:;
- (void).cxx_destruct;
- (id)cellIdentifier;
@end

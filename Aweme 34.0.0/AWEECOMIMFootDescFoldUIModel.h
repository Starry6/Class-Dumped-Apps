@interface AWEECOMIMFootDescFoldUIModel : NSObject
@property (nonatomic) AWEECOMIMFoldInfoModel foldInfo;
@property (nonatomic) BOOL showFoldButton;
@property (nonatomic) BOOL showRedPoint;
@property (nonatomic) NSString text;
- (BOOL)showRedPoint;
- (void)setShowRedPoint:;
- (id)foldInfo;
- (BOOL)showFoldButton;
- (id)initWithShowFoldButton:showRedPoint:text:;
- (void)setFoldInfo:;
- (void)setShowFoldButton:;
- (void)setText:;
- (id)text;
- (void).cxx_destruct;
@end

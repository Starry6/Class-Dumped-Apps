@interface AWEBasicModeCustomDisplayViewModel : NSObject
@property (nonatomic) AWEAwemeModel aweModel;
@property (nonatomic) q indexPath;
@property (nonatomic) @? didChangePlayBackAction;
@property (nonatomic) BOOL hadPrepareToDisplay;
@property (nonatomic) BOOL isLastCell;
@property (nonatomic) double bottomMargin;
- (BOOL)hadPrepareToDisplay;
- (void)setHadPrepareToDisplay:;
- (id)aweModel;
- (void)setAweModel:;
- (id)didChangePlayBackAction;
- (void)setDidChangePlayBackAction:;
- (BOOL)isLastCell;
- (void)setIsLastCell:;
- (long long)indexPath;
- (double)bottomMargin;
- (void)setIndexPath:;
- (void).cxx_destruct;
- (void)setBottomMargin:;
@end

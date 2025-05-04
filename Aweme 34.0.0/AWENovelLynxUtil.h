@interface AWENovelLynxUtil : BDNovelBaseLynxUtil
- (id)createLynxViewWithFrame:url:delegate:;
+ (id)novelLynxConfig;
+ (BOOL)lynxNovelChannelEnable;
+ (void)setLynxNovelChannelEnable:;
+ (BOOL)lynxCheckBlankEnable;
+ (BOOL)lynxMonitorSDKCheckBlankEnable;
+ (id)lynxBlankCheckList;
@end

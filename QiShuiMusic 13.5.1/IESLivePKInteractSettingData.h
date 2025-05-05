@interface IESLivePKInteractSettingData : NSObject
@property (nonatomic) NSString categoryName;
@property (nonatomic) NSArray settings;
@property (nonatomic) BOOL hasMoreButton;
@property (nonatomic) @? moreButtonDidClick;
- (BOOL)hasMoreButton;
- (id)moreButtonDidClick;
- (void)setHasMoreButton:;
- (void)setMoreButtonDidClick:;
- (id)settings;
- (void)setSettings:;
- (void).cxx_destruct;
- (id)categoryName;
- (void)setCategoryName:;
@end

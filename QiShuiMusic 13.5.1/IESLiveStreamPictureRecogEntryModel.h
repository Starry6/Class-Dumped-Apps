@interface IESLiveStreamPictureRecogEntryModel : NSObject
@property (nonatomic) NSInteger type;
@property (nonatomic) UIImage longPressEntryIcon;
@property (nonatomic) UIImage cleanScreenEntryIcon;
@property (nonatomic) NSString entryTitle;
@property (nonatomic) @? shouldShowEntry;
@property (nonatomic) NSMutableDictionary eventParams;
- (void)setEventParams:;
- (id)shouldShowEntry;
- (id)cleanScreenEntryIcon;
- (id)entryTitle;
- (id)longPressEntryIcon;
- (void)setCleanScreenEntryIcon:;
- (void)setEntryTitle:;
- (void)setLongPressEntryIcon:;
- (void)setShouldShowEntry:;
- (void)setType:;
- (int)type;
- (void).cxx_destruct;
- (id)eventParams;
@end

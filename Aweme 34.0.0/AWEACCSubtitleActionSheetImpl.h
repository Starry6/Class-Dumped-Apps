@interface AWEACCSubtitleActionSheetImpl : NSObject
@property (nonatomic) AWESubtitleActionSheet sheet;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL hasTitle;
@property (nonatomic) <ACCSubtitleActionSheetDelegate> delegate;
- (id)titleForSubtitleActionSheet;
- (id)buttonTextsForSubtitleActionSheet;
- (id)buttonTypesForSubtitleActionSheet;
- (void)didClickedSubtitleActionSheetButtonAtIndex:;
- (void)show;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (BOOL)hasTitle;
- (void)setHasTitle:;
- (id)sheet;
- (void)setSheet:;
@end

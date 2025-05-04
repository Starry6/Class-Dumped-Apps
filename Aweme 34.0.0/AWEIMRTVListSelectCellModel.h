@interface AWEIMRTVListSelectCellModel : NSObject
@property (nonatomic) NSString secUID;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) double lastActiveTime;
@property (nonatomic) BOOL preferSelected;
- (void)setLastActiveTime:;
- (void)updateIsSelected:;
- (id)secUID;
- (void)setSecUID:;
- (BOOL)preferSelected;
- (void)setPreferSelected:;
- (void)updateLastActiveTime:;
- (void)updatePreferSelected:;
- (void)setIsSelected:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (double)lastActiveTime;
+ (id)cellModelWIthSecUID:isSelected:lastActiveTime:;
+ (id)cellModelWIthSecUID:isSelected:;
@end

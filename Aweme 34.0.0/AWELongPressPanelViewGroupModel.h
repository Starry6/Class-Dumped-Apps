@interface AWELongPressPanelViewGroupModel : NSObject
@property (nonatomic) BOOL isDYYYCustomGroup;
@property (nonatomic) Q groupType;
@property (nonatomic) NSArray groupArr;
@property (nonatomic) q numberOfRowsInSection;
@property (nonatomic) q cellHeight;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL isModern;
- (void)setIsDYYYCustomGroup:;
- (BOOL)isDYYYCustomGroup;
- (id)groupArr;
- (void)setGroupArr:;
- (void)setNumberOfRowsInSection:;
- (void)setGroupType:;
- (unsigned long long)groupType;
- (void)setHasMore:;
- (void)setIsModern:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (BOOL)isModern;
- (long long)cellHeight;
- (void)setCellHeight:;
- (long long)numberOfRowsInSection;
+ (unsigned long long)getGroupModelTypeOfType:;
+ (id)longPressPanelViewGroupModelWithType:;
@end

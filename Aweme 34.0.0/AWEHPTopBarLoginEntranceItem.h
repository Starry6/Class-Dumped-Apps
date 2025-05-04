@interface AWEHPTopBarLoginEntranceItem : AWEHPTopBarBaseEntranceItem
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)entranceType;
- (id)entranceView;
- (double)topCTAFloat:;
- (id)entranceSize;
+ (BOOL)entranceShouldShow;
+ (id)entranceBizID;
@end

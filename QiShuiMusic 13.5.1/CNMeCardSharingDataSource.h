@interface CNMeCardSharingDataSource : NSObject
@property (nonatomic) Q meCardSharingStatus;
- (id)init;
- (void)setMeCardSharingStatus:;
- (id)localizedStringForMeCardSharingStatus;
- (unsigned long long)meCardSharingStatus;
+ (id)localizedStringForMeCardSharingStatus:;
@end

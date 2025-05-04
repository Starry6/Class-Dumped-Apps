@interface AWESpecialCardDataSourceHandler : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)handleSpecialCard:currentDataSource:pullType:awemeType:;
+ (id)enterFromForType:;
+ (id)markSpecialLocation:pullType:awemeType:;
+ (id)filterInvalidModelForSpecialCardTemplate:awemeType:;
+ (id)filterCardForReversalIfNeed:currentDataSource:awemeType:;
+ (id)callSpecialCardDidInsert:currentDataSource:awemeType:;
+ (BOOL)canShowSpecialCardOfIndex:model:cardName:awemeType:;
@end

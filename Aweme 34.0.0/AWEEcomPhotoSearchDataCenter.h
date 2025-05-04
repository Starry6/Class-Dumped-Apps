@interface AWEEcomPhotoSearchDataCenter : NSObject
@property (nonatomic) NSMutableDictionary mapping;
@property (nonatomic) NSArray sectionList;
@property (nonatomic) AWEEcomPhotoSearchDataStore currentDataStore;
- (id)identifierWithSection:;
- (id)dataStoreWithId:;
- (id)searchChannelWithRawData:;
- (BOOL)isFirstFloorWithChannel:;
- (id)sectionParamsWithId:;
- (id)dataStoreWithSection:;
- (BOOL)isFirstFloorWithData:;
- (id)currentDataStore;
- (void)setCurrentDataStore:;
- (id)init;
- (void)setMapping:;
- (void).cxx_destruct;
- (id)mapping;
- (long long)sectionWithIdentifier:;
- (void)setSectionList:;
- (id)sectionList;
@end

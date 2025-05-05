@interface MTEventDataProvider : MTObject
@property (nonatomic) NSDictionary knownFieldMethods;
@property (nonatomic) NSArray additionalData;
@property (nonatomic) <MTEventDataProviderDelegate> delegate;
- (void)addFields:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)additionalData;
- (id)knownFields;
- (void)setAdditionalData:;
- (void)addFieldsWithDictionary:;
- (void)addFieldsWithPromise:;
- (void)addFieldsWithBlock:;
- (id)flattenAdditionalData;
- (id)knownFieldMethods;
- (id)knownFieldMethodsForKnownFields:;
- (id)processMetricsData:performanceData:;
- (SEL)knownFieldAccessorForFieldName:;
- (void)setKnownFieldMethods:;
@end

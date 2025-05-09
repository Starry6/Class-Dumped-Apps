@interface AMSStorageDatabase : NSObject
@property (nonatomic) AMSSQLiteConnection connection;
@property (nonatomic) NSObject<OS_dispatch_queue> internalQueue;
@property (nonatomic) q keepAliveCount;
@property (nonatomic) NSString domain;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDomain:;
- (id)_convertToValueWithData:valueType:error:;
- (void)dealloc;
- (long long)_valueTypeForValue:;
- (id)allKeyValuesWithError:;
- (BOOL)deleteForKey:error:;
- (id)valueForKey:error:;
- (void)setInternalQueue:;
- (id)sizeWithError:;
- (id)_allKeysPrefixedByDomainWithError:;
- (void)setKeepAliveCount:;
- (void)close;
- (double)doubleForKey:error:;
- (id)_convertToDataWithValue:valueType:error:;
- (id)allKeysForDomain:withError:;
- (BOOL)setDouble:forKey:error:;
- (BOOL)connectionNeedsResetForCorruption:;
- (id)connection;
- (id)_dataForPlistValue:error:;
- (id)_cachePath;
- (BOOL)setInteger:forKey:error:;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)_performTransaction:;
- (BOOL)_setValueData:valueType:forKey:error:;
- (BOOL)setBoolean:forKey:error:;
- (BOOL)setValue:forKey:error:;
- (long long)integerForKey:error:;
- (id)domain;
- (void)setDomain:;
- (BOOL)booleanForKey:error:;
- (id)internalQueue;
- (long long)keepAliveCount;
- (id)_plistValueForData:error:;
+ (BOOL)isFeatureSupported;
+ (id)sharedDatabaseWithDomain:;
@end

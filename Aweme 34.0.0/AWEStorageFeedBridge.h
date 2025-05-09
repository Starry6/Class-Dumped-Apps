@interface AWEStorageFeedBridge : NSObject
- (BOOL)setData:forKey:err:;
- (BOOL)setDictionary:forKey:err:;
- (BOOL)setArray:forKey:err:;
- (BOOL)setString:forKey:err:;
- (BOOL)setURL:forKey:err:;
- (BOOL)setBool:forKey:err:;
- (BOOL)setDouble:forKey:err:;
- (BOOL)setFloat:forKey:err:;
- (BOOL)setInteger:forKey:err:;
- (BOOL)setObject:forKey:err:;
- (BOOL)removeObjectForKey:err:;
- (id)initWithDomainType:realStorage:;
- (id)feed_userFlagKeyForUserID:;
- (long long)feed_userFlag;
- (long long)totalVideoGuideShowedCount;
- (id)todayFirstRecordDate;
- (void)setTodayFirstRecordDate;
- (long long)todayVideoGuideShowedCount;
- (id)todayFirstShowLiveGuideDate;
- (void)setTodayFirstShowLiveGuideDate;
- (long long)todayLiveGuideShowedCount;
- (long long)totalLiveGuideIgnoredCount;
- (BOOL)feed_isUserFlagOn:;
- (void)feed_setUserFlag:;
- (void)feed_clearUserFlag:;
- (void)addVideoGuideShowedCount;
- (void)addTodayVideoGuideShowedCount;
- (void)addTodayLiveGuideShowedCount;
- (void)addLiveGuideIgnoreCount;
- (void)resetLiveGuideIgnoreCount;
- (id)firstIgnoreDate;
- (void)setLiveGuideFirstIgnoreDate;
- (id)handlerWithType:;
- (void)setDouble:forKey:;
- (void)setInteger:forKey:;
- (float)floatForKey:;
- (id)arrayForKey:;
- (id)stringForKey:;
- (id)dataForKey:;
- (id)forwardingTargetForSelector:;
- (void)setData:forKey:;
- (void)setBool:forKey:;
- (void)setArray:forKey:;
- (void)setDictionary:forKey:;
- (void)setString:forKey:;
- (id)dictionaryForKey:;
- (void)removeObjectForKey:;
- (void).cxx_destruct;
- (id)objectForKey:;
- (double)doubleForKey:;
- (void)setFloat:forKey:;
- (BOOL)boolForKey:;
- (long long)integerForKey:;
- (id)URLForKey:;
- (void)setObject:forKey:;
- (void)setURL:forKey:;
@end

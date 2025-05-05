@interface CSJEventCollector : NSObject
@property (nonatomic) BUPolicyDataUnit dataUnit;
@property (nonatomic) NSOperationQueue queue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)statsWithParam:;
- (long long)countByRules:;
- (id)dataProviderFunc:params:;
- (id)dataUnit;
- (void)eventTag:label:eventData:;
- (id)getPlaceholderStr:;
- (id)handleDictArray:;
- (id)handleQuery:;
- (id)queryFrom:rules:orderBy:asc:page:size:;
- (id)queryTb:start:end:;
- (void)removeAll:;
- (void)removeOutdate:;
- (void)setDataUnit:;
- (id)init;
- (id)queryAll:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (void)setupData;
+ (id)sharedInstance;
@end

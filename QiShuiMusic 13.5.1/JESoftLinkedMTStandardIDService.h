@interface JESoftLinkedMTStandardIDService : NSObject
@property (nonatomic) MTStandardIDService backing;
- (id)sync;
- (id)initWithConfigDictionary:;
- (id)backing;
- (void).cxx_destruct;
- (void)setBacking:;
- (id)initWithAMSBag:;
- (id)idFieldsForTopic:;
- (id)secretValueForNamespace:options:;
- (void)queryIDForTopic:type:completion:;
- (id)mtPromiseToAMSPromise:;
@end

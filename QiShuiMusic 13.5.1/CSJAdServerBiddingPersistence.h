@interface CSJAdServerBiddingPersistence : NSObject
+ (id)persistenceOptionWithSlot:type:;
+ (id)biddingPersistenceWithSlot:type:;
+ (id)persistenceInstanceWithSlot:type:;
+ (id)persistenceNameWithSlot:type:;
@end

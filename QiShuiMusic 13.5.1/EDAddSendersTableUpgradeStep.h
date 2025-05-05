@interface EDAddSendersTableUpgradeStep : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)schema;
+ (int)runWithConnection:;
+ (id)sendersTableSchema;
+ (id)senderAddressesTableSchema;
@end

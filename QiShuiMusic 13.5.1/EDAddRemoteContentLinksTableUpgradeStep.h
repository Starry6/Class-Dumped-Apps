@interface EDAddRemoteContentLinksTableUpgradeStep : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (int)runWithConnection:;
+ (id)_remoteContentLinksTableSchema;
@end

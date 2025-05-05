@interface MPMusicPlayerControllerApplicationQueueModifications : NSObject
@property (nonatomic) NSDictionary insertedDescriptors;
@property (nonatomic) NSArray removedItemIdentifiers;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)insertedDescriptors;
- (id)initWithInsertedDescriptors:removedItemIdentifiers:;
- (id)removedItemIdentifiers;
+ (BOOL)supportsSecureCoding;
@end

@interface PlaylistEntity : NSManagedObject
@property (nonatomic) NSString id;
@property (nonatomic) q createdTime;
@property (nonatomic) q updatedTime;
@property (nonatomic) BOOL isAlerted;
@property (nonatomic) NSString reviewStatusValue;
@property (nonatomic) NSOrderedSet tracks;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (id)initWithEntity:insertIntoManagedObjectContext:;
@end

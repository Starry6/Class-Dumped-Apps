@interface SFCollaborationUserDefaults : NSObject
- (void)setCollaborativeMode:contentIdentifier:;
- (id)existingCollaborativeModeForContentIdentifier:;
+ (id)sharedDefaults;
@end

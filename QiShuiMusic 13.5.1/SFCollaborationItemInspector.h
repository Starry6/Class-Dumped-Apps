@interface SFCollaborationItemInspector : NSObject
+ (id)inspectActivityItemValue:activityItem:service:shouldInspectFiles:;
+ (id)_collaborationItemForFileURL:itemProvider:activityItem:service:;
+ (id)_collaborationItemFromItemProvider:forActivityItem:service:shouldInspectFiles:;
@end

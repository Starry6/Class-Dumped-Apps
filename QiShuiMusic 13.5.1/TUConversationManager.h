@interface TUConversationManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <TUConversationManagerDataSource> dataSource;
@property (nonatomic) NSMapTable delegateToQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> nonSessionBackedConversationCreationQueue;
@property (nonatomic) NSMutableSet callsNotBackedByGroupSessionsPendingUpgrade;
@property (nonatomic) NSMutableSet conversationsNotBackedByGroupSessions;
@property (nonatomic) BOOL shouldCreateConversationsForCallsNotBackedByGroupSessions;
@property (nonatomic) Q nonSessionBackedConversationCreationMode;
@property (nonatomic) TUConversationMediaController mediaController;
@property (nonatomic) TUCollaborationManager collaborationManager;
@property (nonatomic) <TUConversationMessagesGroupProviding> messagesGroupProvider;
@property (nonatomic) NSSet activeConversations;
@property (nonatomic) NSSet incomingPendingConversations;
@property (nonatomic) NSDictionary activityAuthorizedBundleIdentifiers;
@property (nonatomic) BOOL autoSharePlayEnabled;
@property (nonatomic) BOOL sharePlayAvailable;
@property (nonatomic) BOOL screenSharingAvailable;
@property (nonatomic) TUConversation handoffEligibleConversation;
@property (nonatomic) TUConversation avLessConversation;
@property (nonatomic) NSSet activatedConversationLinks;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)getActiveLinksWithCreatedOnly:completionHandler:;
- (void)launchApplicationForActivitySessionUUID:forceBackground:completionHandler:;
- (void)launchApplicationForActivitySessionUUID:completionHandler:;
- (void)conversationUpdatedMessagesGroupPhoto:;
- (void)setGridDisplayMode:conversation:;
- (void)scheduleConversationLinkCheckInInitial:;
- (id)activityAuthorizedBundleIdentifiers;
- (void)removeConversationNoticeWithUUID:;
- (void)rejectPendingMember:forConversation:;
- (void)conversation:screenSharingChangedForParticipant:;
- (void)updateMessagesGroupName:onConversation:;
- (void)activeParticipant:addedHighlightToConversation:highlightIdentifier:oldHighlightIdentifier:isFirstAdd:;
- (void)conversationUpdateMessagesGroupPhoto:;
- (void)sharePlayAvailableChanged:;
- (BOOL)isSharePlayAvailable;
- (void)buzzMember:conversation:;
- (void)activateLink:completionHandler:;
- (void)generateLinkForConversation:completionHandler:;
- (void)kickMember:conversation:;
- (void)activeParticipant:removedHighlightFromConversation:highlightIdentifier:;
- (void)conversation:didChangeStateForActivitySession:;
- (void)joinConversationWithRequest:;
- (void)remoteScreenShareEndedWithReason:;
- (void)invalidateLink:completionHandler:;
- (void)screenSharingAvailableChanged:;
- (BOOL)isScreenSharingAvailable;
- (void)fetchUpcomingNoticeWithCompletionHandler:;
- (void)setLinkName:forConversationLink:completionHandler:;
- (void)setAutoSharePlayEnabled:;
- (void)setActivityAuthorization:forBundleIdentifier:;
- (void)getLatestRemoteScreenShareAttributesWithCompletionHandler:;
- (void)conversation:addedMembersLocally:;
- (void)conversation:receivedActivitySessionEvent:;
- (void)activateConversationNoticeWithActionURL:bundleIdentifier:;
- (void)getInactiveLinkWithCompletionHandler:;
- (void)conversation:didChangeSceneAssociationForActivitySession:;
- (void)setAudioEnabled:forRemoteParticipantWithIdentifier:conversation:;
- (void)addedCollaborationDictionary:forConversation:;
- (void)getMessagesGroupDetailsForConversationUUID:completionHandler:;
- (BOOL)autoSharePlayEnabled;
- (void)leaveActivitySession:onConversation:;
- (void)conversation:buzzedMember:;
- (void)createActivitySession:onConversation:;
- (void)registerMessagesGroupUUIDForConversationUUID:;
- (void)setLocalParticipantAudioVideoMode:forConversationUUID:;
- (id)activatedConversationLinks;
- (void)conversation:remoteParticipantWithIdentifier:updatedVideoEnabled:;
- (void)refreshActiveConversations;
- (void)launchApplicationForActivitySession:completionHandler:;
- (void)conversation:remoteParticipantWithIdentifier:updatedAudioEnabled:;
- (void)presentDismissalAlertForActivitySession:onConversation:;
- (void)addCollaboration:forConversation:;
- (void)registerWithCompletionHandler:;
- (id)init;
- (void)setIgnoreLMIRequests:forConversation:;
- (void)checkLinkValidity:completionHandler:;
- (void)dealloc;
- (void)setCollaborationManager:;
- (long long)collaborationStateForConversation:;
- (void)addInvitedMemberHandles:toConversationLink:completionHandler:;
- (id)mediaController;
- (void)callPropertiesChanged:;
- (void)conversationManagerDataSource:didChangeActivatedConversationLinks:;
- (id)initWithDataSource:;
- (void)conversationsChangedForDataSource:oldConversationsByGroupUUID:newConversationsByGroupUUID:creationQueue:;
- (void)removeDelegate:;
- (void)setUsingAirplay:onActivitySession:onConversation:;
- (void)renewLink:expirationDate:reason:completionHandler:;
- (void)conversation:participant:addedCollaborationNotice:;
- (void)conversationManagerDataSource:conversation:appLaunchState:forActivitySession:;
- (id)createConversationForCallNotBackedByGroupSession:;
- (BOOL)openCollaborationWithIdentifier:forConversation:;
- (void)setScreenEnabled:withScreenShareAttributes:forConversationWithUUID:;
- (void)collaborationChanged:forConversation:collaborationState:;
- (void)linkSyncStateIncludeLinks:WithCompletion:;
- (void)setCallsNotBackedByGroupSessionsPendingUpgrade:;
- (id)collaborationForConversation:;
- (void)conversation:collaborationStateChanged:highlightIdentifier:;
- (void)setNonSessionBackedConversationCreationMode:;
- (void)updateConversationsNotBackedByGroupSessionWithCall:;
- (id)conversationsNotBackedByGroupSessions;
- (void)removeCollaborationIdentifier:forConversation:;
- (void)setMessagesGroupProvider:;
- (void)conversationsChangedForDataSource:updatedIncomingPendingConversationsByGroupUUID:;
- (id)activeConversationWithRemoteMembers:andLink:;
- (void)receivedTrackedPendingMember:forConversationLink:;
- (id)callPendingUpgradeInConversationsWithGroupUUID:;
- (void)addCollaborationDictionary:forConversation:fromMe:;
- (void)remoteScreenShareAttributesChanged:isLocallySharing:;
- (void)endActivitySession:onConversation:;
- (void)leaveConversationWithUUID:;
- (void)setNonSessionBackedConversationCreationQueue:;
- (id)activeConversations;
- (BOOL)shouldCreateConversationsForCallsNotBackedByGroupSessions;
- (id)avLessConversation;
- (id)dataSource;
- (void)setVideoEnabled:forRemoteParticipantWithIdentifier:conversation:;
- (void)conversationsChangedFromOldConversationsByGroupUUID:newConversationsByGroupUUID:;
- (void)addDelegate:queue:;
- (void)setConversationsNotBackedByGroupSessions:;
- (id)collaborationManager;
- (void)conversation:participant:addedNotice:;
- (void)serverDisconnectedForDataSource:oldConversationsByGroupUUID:;
- (id)activeConversationWithGroupUUID:;
- (void).cxx_destruct;
- (void)activityAuthorizationsChangedForDataSource:oldActivityAuthorizedBundleIdentifiers:;
- (void)updateURLWithDugongTokenIfNeeded:collaboration:handle:completion:;
- (id)joinRequestForApplicableConversationWithHandoffEligibility:;
- (void)setDownlinkMuted:forRemoteParticipantsInConversation:;
- (id)handoffEligibleConversation;
- (id)callsNotBackedByGroupSessionsPendingUpgrade;
- (id)delegateToQueue;
- (unsigned long long)nonSessionBackedConversationCreationMode;
- (void)pruneConversationsPendingUpgradeInConversationsWithGroupUUID:;
- (id)handoffEligibleConversationForEligibility:;
- (id)nonSessionBackedConversationCreationQueue;
- (void)addRemoteMembers:toConversation:;
- (id)messagesGroupProvider;
- (void)conversationManagerDataSource:messagesGroupDetailsForMessagesGroupId:completionHandler:;
- (id)activeConversationWithRemoteMembers:andLink:matchingVideo:backedByGroupSession:;
- (void)startTrackingCollaboration:forConversation:completionHandler:;
- (id)ckBundleIDForCollaborationIdentifier:;
- (void)addCollaborationIdentifier:forConversation:;
- (void)setShouldCreateConversationsForCallsNotBackedByGroupSessions:;
- (void)generateLinkWithInvitedMemberHandles:linkLifetimeScope:completionHandler:;
- (id)queue;
- (id)incomingPendingConversations;
- (void)addRemoteMembers:otherInvitedHandles:toConversation:;
- (id)pendingConversationWithLink:;
- (BOOL)currentProcessCanAccessCollaborations;
- (void)generateLinkWithInvitedMemberHandles:completionHandler:;
- (void)approvePendingMember:forConversation:;
- (void)updateConversationsNotBackedByGroupSessionWithCall:conversationsByGroupUUID:creationQueue:;
- (void)conversationsChangedForDataSource:oldConversationsByGroupUUID:;
- (id)activeConversationWithLinkForCall:;
- (void)requestScreenShareFromMember:conversation:;
+ (long long)memorySize;
+ (id)activeRemoteParticipantsForCall:remoteMembers:;
+ (id)pendingConversationWithLink:fromConversations:;
+ (BOOL)allowsScreenSharing;
+ (unsigned long long)maximumNumberOfInvitedMembers;
+ (BOOL)supportsConversations;
+ (BOOL)allowsVideo;
+ (BOOL)allowsPortraitBlurWhenCaptionsEnabled;
+ (BOOL)isAddPersonEnabled;
+ (id)conversationWithPseudonym:fromConversations:;
+ (BOOL)supportsEffects;
+ (id)remoteMembersForCall:;
+ (id)conversationsWithRemoteMembers:andLink:fromConversations:;
+ (id)conversationWithRemoteMembers:andLink:fromConversations:;
+ (id)conversationWithUUID:fromConversations:;
+ (long long)conversationStateForCall:;
+ (id)conversationWithRemoteMembers:andLink:fromConversations:matchingVideo:backedByGroupSession:;
+ (BOOL)allowsScreenSharingWithVideo;
@end

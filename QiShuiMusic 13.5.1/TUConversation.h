@interface TUConversation : NSObject
@property (nonatomic) NSArray supportedMediaTypes;
@property (nonatomic) NSUUID UUID;
@property (nonatomic) NSUUID groupUUID;
@property (nonatomic) TUConversationLink link;
@property (nonatomic) q state;
@property (nonatomic) q letMeInRequestState;
@property (nonatomic) BOOL hasReceivedLetMeInRequest;
@property (nonatomic) q avcSessionToken;
@property (nonatomic) NSString avcSessionIdentifier;
@property (nonatomic) BOOL audioEnabled;
@property (nonatomic) BOOL videoEnabled;
@property (nonatomic) BOOL videoPaused;
@property (nonatomic) BOOL screenEnabled;
@property (nonatomic) Q avMode;
@property (nonatomic) BOOL locallyCreated;
@property (nonatomic) BOOL hasJoined;
@property (nonatomic) BOOL isAnyOtherAccountDeviceActive;
@property (nonatomic) BOOL pendingConversation;
@property (nonatomic) TUConversationMember localMember;
@property (nonatomic) Q localParticipantIdentifier;
@property (nonatomic) TUConversationParticipantAssociation localParticipantAssociation;
@property (nonatomic) BOOL oneToOneHandoffOngoing;
@property (nonatomic) TUConversationHandoffEligibility handoffEligibility;
@property (nonatomic) NSSet remoteMembers;
@property (nonatomic) NSSet pendingMembers;
@property (nonatomic) NSSet kickedMembers;
@property (nonatomic) NSSet rejectedMembers;
@property (nonatomic) NSSet lightweightMembers;
@property (nonatomic) NSSet otherInvitedHandles;
@property (nonatomic) BOOL ignoreLMIRequests;
@property (nonatomic) NSUUID messagesGroupUUID;
@property (nonatomic) NSSet participantHandles;
@property (nonatomic) NSSet activeRemoteParticipants;
@property (nonatomic) NSSet activeLightweightParticipants;
@property (nonatomic) TUHandle initiator;
@property (nonatomic) NSString messagesGroupName;
@property (nonatomic) q maxVideoDecodesAllowed;
@property (nonatomic) NSObject reportingHierarchyToken;
@property (nonatomic) NSObject reportingHierarchySubToken;
@property (nonatomic) TUConversationReport report;
@property (nonatomic) BOOL oneToOneModeEnabled;
@property (nonatomic) BOOL backedByGroupSession;
@property (nonatomic) NSSet activitySessions;
@property (nonatomic) NSSet systemActivitySessions;
@property (nonatomic) NSSet highlightIdentifiers;
@property (nonatomic) TUConversationActivitySession stagedActivitySession;
@property (nonatomic) NSSet virtualParticipants;
@property (nonatomic) NSSet invitationPreferences;
@property (nonatomic) BOOL fromStorage;
@property (nonatomic) NSUUID selectiveSharingSessionUUID;
@property (nonatomic) BOOL mirageEnabled;
@property (nonatomic) @ conversationFailureContext;
@property (nonatomic) TUConversationProvider provider;
@property (nonatomic) <TUFeatureFlags> featureFlags;
@property (nonatomic) Q resolvedAudioVideoMode;
- (id)link;
- (void)setProvider:;
- (id)bundleIdentifier;
- (BOOL)isVideo;
- (void)setFeatureFlags:;
- (id)groupUUID;
- (BOOL)isFromStorage;
- (void)setGroupUUID:;
- (void)setState:;
- (void)setUUID:;
- (BOOL)supportsAVMode:;
- (void)setLink:;
- (void)setReport:;
- (BOOL)supportsMediaType:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)displayName;
- (id)supportedMediaTypes;
- (void)setInitiator:;
- (id)provider;
- (void)encodeWithCoder:;
- (void)setFromStorage:;
- (long long)state;
- (void).cxx_destruct;
- (void)setSupportedMediaTypes:;
- (id)initiator;
- (id)featureFlags;
- (id)description;
- (id)handles;
- (void)setVideo:;
- (id)mutableCopyWithZone:;
- (id)UUID;
- (id)pendingMembers;
- (BOOL)isEqual:;
- (id)report;
- (id)copyWithZone:;
- (id)participantHandles;
- (void)setParticipantHandles:;
- (unsigned long long)avMode;
- (id)activeRemoteParticipants;
- (id)localMember;
- (id)initWithConversation:;
- (void)setPendingConversation:;
- (void)setAudioEnabled:;
- (void)setVideoEnabled:;
- (id)remoteMembers;
- (BOOL)isAudioEnabled;
- (id)activitySessions;
- (void)setInvitationPreferences:;
- (id)messagesGroupPhotoData;
- (void)setAvMode:;
- (void)setMessagesGroupName:;
- (void)setMessagesGroupUUID:;
- (BOOL)isScreenEnabled;
- (BOOL)isVideoEnabled;
- (void)setScreenEnabled:;
- (id)stagedActivitySession;
- (id)avcSessionIdentifier;
- (long long)avcSessionToken;
- (BOOL)isBackedByGroupSession;
- (BOOL)hasJoined;
- (id)kickedMembers;
- (id)rejectedMembers;
- (id)otherInvitedHandles;
- (BOOL)hasReceivedLetMeInRequest;
- (long long)letMeInRequestState;
- (BOOL)ignoreLMIRequests;
- (BOOL)isLocallyCreated;
- (unsigned long long)localParticipantIdentifier;
- (id)localParticipantAssociation;
- (BOOL)isOneToOneHandoffOngoing;
- (id)handoffEligibility;
- (long long)maxVideoDecodesAllowed;
- (id)messagesGroupName;
- (id)messagesGroupUUID;
- (BOOL)isOneToOneModeEnabled;
- (BOOL)isVideoPaused;
- (id)virtualParticipants;
- (id)invitationPreferences;
- (id)lightweightMembers;
- (id)activeLightweightParticipants;
- (BOOL)isAnyOtherAccountDeviceActive;
- (BOOL)isMirageEnabled;
- (id)systemActivitySessions;
- (BOOL)isPendingConversation;
- (id)selectiveSharingSessionUUID;
- (id)highlightIdentifiers;
- (id)initWithUUID:groupUUID:;
- (id)initWithUUID:groupUUID:provider:;
- (unsigned long long)resolvedAudioVideoMode;
- (BOOL)eligibleForDowngradeToAVModeNoneFromUI;
- (id)joinedActivitySession;
- (BOOL)hasJoinedActivitySession;
- (BOOL)isRepresentedByRemoteMembers:andLink:;
- (id)remoteParticipantForLightweightParticipantHandle:;
- (BOOL)shouldShowInvitationOfStyles:forHandle:defaultValue:;
- (BOOL)shouldShowInvitationUserNotificationForHandle:;
- (BOOL)shouldShowInvitationRingingUIForHandle:;
- (BOOL)shouldShowInvitationRingingUIForAnyHandleType;
- (id)contactNamesByHandleWithContactsDataSource:;
- (BOOL)isEqualToConversation:;
- (void)setHasReceivedLetMeInRequest:;
- (void)setLetMeInRequestState:;
- (void)setLocallyCreated:;
- (void)setRemoteMembers:;
- (void)setPendingMembers:;
- (void)setKickedMembers:;
- (void)setRejectedMembers:;
- (void)setLightweightMembers:;
- (void)setOtherInvitedHandles:;
- (void)setActiveRemoteParticipants:;
- (void)setActiveLightweightParticipants:;
- (void)setActivitySessions:;
- (void)setStagedActivitySession:;
- (void)setHighlightIdentifiers:;
- (void)setAvcSessionToken:;
- (void)setAvcSessionIdentifier:;
- (void)setVideoPaused:;
- (void)setHasJoined:;
- (void)setIsAnyOtherAccountDeviceActive:;
- (void)setLocalMember:;
- (void)setLocalParticipantIdentifier:;
- (void)setLocalParticipantAssociation:;
- (void)setOneToOneHandoffOngoing:;
- (void)setHandoffEligibility:;
- (void)setIgnoreLMIRequests:;
- (void)setMaxVideoDecodesAllowed:;
- (id)reportingHierarchyToken;
- (void)setReportingHierarchyToken:;
- (id)reportingHierarchySubToken;
- (void)setReportingHierarchySubToken:;
- (void)setOneToOneModeEnabled:;
- (void)setBackedByGroupSession:;
- (void)setSystemActivitySessions:;
- (void)setVirtualParticipants:;
- (void)setSelectiveSharingSessionUUID:;
- (void)setMirageEnabled:;
- (id)conversationFailureContext;
- (void)setConversationFailureContext:;
+ (id)numberFormatter;
+ (BOOL)supportsSecureCoding;
+ (id)emptyConversationWithGroupUUID:;
@end

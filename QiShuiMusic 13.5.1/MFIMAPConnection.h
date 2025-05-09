@interface MFIMAPConnection : MFConnection
@property (nonatomic) Q idleCommandSequenceNumber;
@property (nonatomic) <EFCancelable> idleSubscriptionCancelable;
@property (nonatomic) I permanentFlags;
@property (nonatomic) MFIMAPCommandPipeline fetchPipeline;
@property (nonatomic) MFIMAPDownloadCache downloadCache;
@property (nonatomic) <MFIMAPConnectionDelegate> delegate;
@property (nonatomic) NSInteger tag;
@property (nonatomic) double connectTime;
@property (nonatomic) BOOL gotBadResponse;
@property (nonatomic) BOOL hasValidConnection;
@property (nonatomic) BOOL idle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString ef_publicDescription;
- (BOOL)logout;
- (id)ef_publicDescription;
- (int)connectionState;
- (int)tag;
- (id)init;
- (void)dealloc;
- (id)capabilities;
- (void)disconnect;
- (void)setDelegate:;
- (void)close;
- (id)debugDescription;
- (BOOL)supportsCapability:;
- (void)lock;
- (void)setTag:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)loginDisabled;
- (BOOL)isIdle;
- (id)description;
- (BOOL)deleteMailbox:;
- (id)copyDiagnosticInformation;
- (id)copyWithZone:;
- (void)unselect;
- (id)downloadCache;
- (BOOL)sendResponsesForCondStoreFlagFetchForUIDs:withSequenceIdentifier:toQueue:;
- (BOOL)connectUsingAccount:;
- (BOOL)authenticateUsingAccount:;
- (BOOL)authenticateUsingAccount:authenticator:;
- (BOOL)startTLSForAccount:;
- (id)eSearchIDSet:areMessageSequenceNumbers:arguments:success:returning:;
- (id)eSearchIDSet:areMessageSequenceNumbers:forTerms:success:returning:;
- (id)parseIndexSetFromSequenceSet:;
- (void)parseSearchReturn:;
- (void)parseESearchResponseWithContext:;
- (unsigned int)readBufferSize;
- (void)setReadBufferSize:;
- (id)separatorChar;
- (id)serverPathPrefix;
- (void)_handleBytesAvailableInternal;
- (BOOL)expunge;
- (BOOL)expungeUIDs:;
- (BOOL)storeFlagChange:forUIDs:;
- (BOOL)storeGmailLabels:state:forUIDs:;
- (BOOL)copyUIDs:toMailboxNamed:copyInfo:error:;
- (BOOL)moveUIDs:toMailboxNamed:copyInfo:error:;
- (BOOL)appendData:toMailboxNamed:flags:dateReceived:appendInfo:error:;
- (BOOL)hasValidConnection;
- (id)fetchPipeline;
- (id)mailboxListFilter;
- (void)setMailboxListFilter:;
- (void)_clearCapabilities;
- (void)_addCapabilities:;
- (void)_fetchCapabilities;
- (void)_sendClientInfoIfSupported;
- (void)_sendApplePushForAccountIfSupported:;
- (void)_enableCompressionIfSupported;
- (BOOL)_connectSocketUsingAccount:;
- (BOOL)_doBasicConnectionUsingAccount:;
- (BOOL)_tryConnectionUsingAccount:;
- (void)disconnectAndNotifyDelegate:;
- (int)fillLiteralBuffer:count:dataLength:nonSynchronizingLiteral:;
- (unsigned long long)_sendCommands:response:;
- (id)_copyNextServerResponseForCommand:;
- (id)_copyNextTaggedOrContinuationResponseForCommand:;
- (id)_errorForResponse:commandParams:;
- (void)noop;
- (id)_serverErrorForAccount:response:command:;
- (void)_updateCapabilitiesForAccount:withAuthenticationResponse:;
- (int)_doIMAPLoginForAccount:quotedUsername:password:;
- (BOOL)loginWithAccount:password:;
- (id)_doNamespaceCommand;
- (id)_doListCommand:withReference:mailboxName:options:getSpecialUse:statusDataItems:statusEntriesByMailbox:;
- (id)_listingForMailbox:options:getSpecialUse:statusDataItems:statusEntriesByMailbox:withCommand:;
- (id)listingForMailbox:options:getSpecialUse:statusDataItems:statusEntriesByMailbox:;
- (id)subscribedListingForMailbox:options:;
- (BOOL)closeAndLogout;
- (void)handleBytesAvailable;
- (void)locked_startIdle;
- (void)locked_finishIdle;
- (void)finishIdle;
- (void)locked_scheduleIdle;
- (void)scheduleIdleReset;
- (void)locked_scheduleIdleResetAfterDelay:;
- (void)fetchStatusForMailboxes:args:;
- (BOOL)examineMailbox:;
- (BOOL)selectMailbox:withAccount:;
- (id)selectedMailbox;
- (BOOL)createMailbox:;
- (BOOL)renameMailbox:toMailbox:;
- (BOOL)subscribeMailbox:;
- (BOOL)unsubscribeMailbox:;
- (id)quotaPercentagesForMailbox:;
- (BOOL)_sendMailboxCommand:withArguments:;
- (id)copyArgumentForSearchTerm:;
- (id)searchUidSet:forTerms:success:;
- (id)searchIDSet:forTerms:success:;
- (unsigned long long)countForSearchOfIDSet:forTerms:success:;
- (unsigned long long)countForSearchOfUidSet:forTerms:success:;
- (void)_updateSearchCapabilityWithAccount:;
- (unsigned int)getMailboxIDForUID:;
- (BOOL)storeFlags:state:forMessageSet:;
- (BOOL)storeFlags:state:forUIDs:;
- (BOOL)storeFlags:state:forRange:;
- (BOOL)deleteMessagesOlderThanNumberOfDays:;
- (id)_responseFromSendingCommand:andPossiblyCreateMailbox:;
- (id)copyInfoForMessageInfo:;
- (id)_dictionaryFromSourceUIDs:destinationUIDs:;
- (id)_indexSetForIMAPInlineSet:;
- (BOOL)appendData:toMailboxNamed:flags:dateReceived:newMessageInfo:;
- (id)_headersToFetchIncludingThoseRequiredForRouting:withRecipients:;
- (id)fetchMessageIdsForUids:;
- (BOOL)performCustomCommand:withArguments:;
- (void)setReadBufferSizeFromElapsedTime:bytesRead:;
- (id)messageSetForRange:;
- (id)messageSetForRange:butNotNumbers:;
- (id)messageSetForNumbers:;
- (id)messageSetForUIDs:;
- (id)messageSetForUIDs:maxTokens:remainder:;
- (id)parenthesizedStringWithObjects:;
- (id)_connectionStateDescription;
- (id)_connectionLogPrefix;
- (unsigned int)literalChunkSize;
- (id)_readDataOfLength:;
- (id)_fetchArgumentForMessageUidsAndFlags;
- (id)_fetchArgumentForMessageSkeletonsWithAllHeaders;
- (BOOL)_isFetchResponseValid:;
- (id)_responseFromSendingCommands:;
- (BOOL)sendResponsesForCommand:toQueue:;
- (BOOL)sendResponsesForUIDFetchForUIDs:fields:toQueue:;
- (BOOL)sendSkeletonResponsesForUIDs:includeTo:toQueue:;
- (BOOL)sendUidAndFlagResponsesForUIDs:sequenceIdentifierProvider:flagSearchResults:toQueue:;
- (BOOL)sendUidResponsesForSearchArguments:toQueue:;
- (id)searchUIDs:withFlagRequests:;
- (BOOL)sendResponsesForUIDs:fields:flagSearchResults:toQueue:;
- (void)didFinishCommands:;
- (id)_logStringForIDs:;
- (id)_logStringForCommand:;
- (double)connectTime;
- (BOOL)gotBadResponse;
- (unsigned long long)idleCommandSequenceNumber;
- (void)setIdleCommandSequenceNumber:;
- (id)idleSubscriptionCancelable;
- (void)setIdleSubscriptionCancelable:;
- (unsigned int)permanentFlags;
- (void)setPermanentFlags:;
- (id)_messageIDsFromFetchResultData:;
- (id)_getReferencesForMessageSet:;
- (id)_searchUidsForMessageIDs:excludeDeleted:;
- (id)_uidsForMessageIDs:excludeDeleted:;
- (id)_getFirstLevelMessageIDsForReference:;
- (id)uidsReferencedBy:;
+ (id)log;
+ (void)setReadSizeParameters;
@end

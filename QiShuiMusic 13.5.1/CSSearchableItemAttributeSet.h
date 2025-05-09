@interface CSSearchableItemAttributeSet : NSObject
@property (nonatomic) NSString ic_dataSourceIdentifier;
@property (nonatomic) Q ic_searchResultType;
@property (nonatomic) BOOL ic_isLocked;
@property (nonatomic) BOOL ic_isShared;
@property (nonatomic) BOOL ic_hasChecklists;
@property (nonatomic) BOOL ic_hasTags;
@property (nonatomic) BOOL ic_hasDrawings;
@property (nonatomic) BOOL ic_hasScannedDocuments;
@property (nonatomic) BOOL ic_hasAttachments;
@property (nonatomic) NSString ic_relatedModernNoteUniqueIdentifier;
@property (nonatomic) NSData HTMLContentDataNoCopy;
@property (nonatomic) NSString textContentNoCopy;
@property (nonatomic) NSString accountType;
@property (nonatomic) NSString textSelected;
@property (nonatomic) NSString subtitle;
@property (nonatomic) NSArray userTags;
@property (nonatomic) NSString albumPersistentID;
@property (nonatomic) NSString adamID;
@property (nonatomic) NSNumber extendedContentRating;
@property (nonatomic) NSNumber fileIdentifier;
@property (nonatomic) NSNumber parentFileIdentifier;
@property (nonatomic) NSString filename;
@property (nonatomic) NSNumber documentIdentifier;
@property (nonatomic) NSNumber dataOwnerType;
@property (nonatomic) NSNumber existingThread;
@property (nonatomic) NSNumber partiallyDownloaded;
@property (nonatomic) NSArray queryResultMatchedFields;
@property (nonatomic) NSNumber deletedWithRelatedUniqueIdentifier;
@property (nonatomic) NSNumber contentCreationDateHour;
@property (nonatomic) NSNumber contentCreationDateMonth;
@property (nonatomic) NSNumber contentCreationDateYear;
@property (nonatomic) NSNumber contentCreationDateWeekday;
@property (nonatomic) NSNumber contentCreationDateWeekdayOrdinal;
@property (nonatomic) NSNumber contentCreationDateWeekOfMonth;
@property (nonatomic) NSNumber contentCreationDateWeekOfYear;
@property (nonatomic) NSNumber contentModificationDateHour;
@property (nonatomic) NSNumber contentModificationDateMonth;
@property (nonatomic) NSNumber contentModificationDateYear;
@property (nonatomic) NSNumber contentModificationDateWeekday;
@property (nonatomic) NSNumber contentModificationDateWeekdayOrdinal;
@property (nonatomic) NSNumber contentModificationDateWeekOfMonth;
@property (nonatomic) NSNumber contentModificationDateWeekOfYear;
@property (nonatomic) NSString uniqueIdentifier;
@property (nonatomic) NSString bundleID;
@property (nonatomic) NSString protectionClass;
@property (nonatomic) NSDate expirationDate;
@property (nonatomic) NSString userActivityType;
@property (nonatomic) NSString queryResultRelevance;
@property (nonatomic) NSString applicationName;
@property (nonatomic) NSString contentSnippet;
@property (nonatomic) NSString relatedAppBundleIdentifier;
@property (nonatomic) NSArray hashtags;
@property (nonatomic) NSNumber hasLPMedia;
@property (nonatomic) NSArray LPMediaPaths;
@property (nonatomic) NSString groupPhotoPath;
@property (nonatomic) NSNumber syndicationStatus;
@property (nonatomic) NSDate syndicatedContentServerDate;
@property (nonatomic) NSNumber requiresImport;
@property (nonatomic) NSString importSandboxExtension;
@property (nonatomic) NSNumber visualAssetPriority;
@property (nonatomic) NSArray authorPhotosPersonIdentifiers;
@property (nonatomic) NSArray recipientPhotosPersonIdentifiers;
@property (nonatomic) NSString collaborationIdentifier;
@property (nonatomic) NSString richLinkTitle;
@property (nonatomic) NSString richLinkID;
@property (nonatomic) NSString richLinkURL;
@property (nonatomic) NSString thumbnailContentType;
@property (nonatomic) NSString thumbnailBundleID;
@property (nonatomic) NSArray mailAttachmentNames;
@property (nonatomic) NSArray mailAttachmentTypes;
@property (nonatomic) NSArray mailAttachmentKinds;
@property (nonatomic) NSDate mailDateReceived;
@property (nonatomic) NSDate mailDateLastViewed;
@property (nonatomic) NSNumber mailFlagged;
@property (nonatomic) NSNumber mailFlagColor;
@property (nonatomic) NSNumber mailRead;
@property (nonatomic) NSNumber mailRepliedTo;
@property (nonatomic) NSNumber mailPriority;
@property (nonatomic) NSArray mailGMailLabels;
@property (nonatomic) NSString mailMessageID;
@property (nonatomic) NSString mailCategory;
@property (nonatomic) NSString mailConversationID;
@property (nonatomic) NSNumber readerView;
@property (nonatomic) NSString textContentDataSource;
@property (nonatomic) NSArray autocompleteTriggers;
@property (nonatomic) NSString fileProviderID;
@property (nonatomic) NSString fileItemID;
@property (nonatomic) NSString parentFileItemID;
@property (nonatomic) NSString FPFilename;
@property (nonatomic) NSString ownerName;
@property (nonatomic) NSString ownerIdentifier;
@property (nonatomic) NSString lastEditorName;
@property (nonatomic) NSString lastEditorIdentifier;
@property (nonatomic) NSString fileProviderDomaindentifier;
@property (nonatomic) NSString fileProviderDomainIdentifier;
@property (nonatomic) NSArray fileProviderUserInfoKeys;
@property (nonatomic) NSArray fileProviderUserInfoValues;
@property (nonatomic) NSNumber pinned;
@property (nonatomic) NSNumber trashed;
@property (nonatomic) NSNumber shared;
@property (nonatomic) NSNumber uploaded;
@property (nonatomic) NSNumber uploading;
@property (nonatomic) NSNumber uploadError;
@property (nonatomic) NSNumber downloading;
@property (nonatomic) NSNumber downloadError;
@property (nonatomic) NSData extraData;
@property (nonatomic) NSNumber favoriteRank;
@property (nonatomic) NSNumber subItemCount;
@property (nonatomic) NSString sharedItemCurrentUserRole;
@property (nonatomic) NSString versionIdentifier;
@property (nonatomic) NSString downloadingStatus;
@property (nonatomic) NSData intentData;
@property (nonatomic) NSString suggestedInvocationPhrase;
@property (nonatomic) NSNumber backgroundRunnable;
@property (nonatomic) NSString punchoutLabel;
@property (nonatomic) NSNumber shortcutAvailability;
@property (nonatomic) NSDate lastApplicationLaunchedDate;
@property (nonatomic) NSNumber isPlaceholder;
@property (nonatomic) NSArray topic;
@property (nonatomic) NSNumber portraitStaticScore;
@property (nonatomic) NSData portraitFeatureVector;
@property (nonatomic) NSNumber portraitFeatureVectorVersion;
@property (nonatomic) NSDictionary portraitNamedEntities;
@property (nonatomic) NSString photosResultType;
@property (nonatomic) NSString photosCollectionSubtitle;
@property (nonatomic) NSNumber photosCollectionResultCount;
@property (nonatomic) NSString photosCollectionKeyAssetUUID;
@property (nonatomic) NSNumber photosFavorited;
@property (nonatomic) NSString photosMemoryTitle;
@property (nonatomic) NSArray photosBusinessNames;
@property (nonatomic) NSArray photosBusinessCategories;
@property (nonatomic) NSArray photosMediaTypes;
@property (nonatomic) NSArray photosPeople;
@property (nonatomic) NSArray photosEventNames;
@property (nonatomic) NSArray photosSeasons;
@property (nonatomic) NSArray photosHolidays;
@property (nonatomic) NSArray photosSceneIdentifiers;
@property (nonatomic) NSArray photosScenes;
@property (nonatomic) NSArray photosMeanings;
@property (nonatomic) NSArray photosEventCategories;
@property (nonatomic) NSArray photosEventPerformers;
@property (nonatomic) NSArray photosSceneClassifications;
@property (nonatomic) NSNumber aestheticScore;
@property (nonatomic) NSNumber curationScore;
@property (nonatomic) NSNumber isCinematicVideo;
@property (nonatomic) NSNumber isProResVideo;
@property (nonatomic) NSString savingApplication;
@property (nonatomic) NSString savingApplicationBundleIdentifier;
@property (nonatomic) NSNumber hasTopMomentScore;
@property (nonatomic) NSNumber eligibleForPhotosProcessing;
@property (nonatomic) NSString photosAcquisitionMake;
@property (nonatomic) NSString photosAcquisitionModel;
@property (nonatomic) NSNumber photosDuration;
@property (nonatomic) NSDate photosContentCreationDate;
@property (nonatomic) NSString photosContentType;
@property (nonatomic) NSString photosTitle;
@property (nonatomic) NSString photosContentDescription;
@property (nonatomic) NSString photosDisplayName;
@property (nonatomic) NSString photosFilename;
@property (nonatomic) NSArray photosKeywords;
@property (nonatomic) NSString photosContainerIdentifier;
@property (nonatomic) NSNumber photosContentRating;
@property (nonatomic) NSNumber photosAestheticScore;
@property (nonatomic) NSNumber photosCurationScore;
@property (nonatomic) NSString photosSavingApplication;
@property (nonatomic) NSString photosSavingApplicationBundleIdentifier;
@property (nonatomic) NSNumber photosHasTopMomentScore;
@property (nonatomic) NSNumber photosIsProResVideo;
@property (nonatomic) NSArray photosTextContentPieces;
@property (nonatomic) NSString photosTimeZoneName;
@property (nonatomic) NSNumber photosTimeZoneOffset;
@property (nonatomic) NSNumber photosInferredTimeZoneOffset;
@property (nonatomic) NSString photosLibraryName;
@property (nonatomic) CSPerson photosContributor;
@property (nonatomic) NSNumber photosIsCinematicVideo;
@property (nonatomic) NSNumber photosDonationState;
@property (nonatomic) NSNumber photosCharacterRecognitionAnalysisVersion;
@property (nonatomic) NSNumber photosFaceAnalysisVersion;
@property (nonatomic) NSNumber photosMediaAnalysisVersion;
@property (nonatomic) NSNumber photosSceneAnalysisVersion;
@property (nonatomic) NSNumber lastMotionActivityState;
@property (nonatomic) NSString messageSuggestedContactName;
@property (nonatomic) NSString messageSuggestedContactPhotoPath;
@property (nonatomic) NSNumber potentialEventMessage;
@property (nonatomic) NSNumber isZombie;
@property (nonatomic) CSDonatedEvent donatedEvent;
@property (nonatomic) NSMutableDictionary mutableAttributes;
@property (nonatomic) NSMutableDictionary customAttributes;
@property (nonatomic) NSDictionary attributes;
@property (nonatomic) q searchableItemFlags;
@property (nonatomic) CSDecoder decoder;
@property (nonatomic) CSDecoder contentDecoder;
@property (nonatomic) {?=*{?=IC}} codedAttributes;
@property (nonatomic) {?=*{?=IC}} codedCustomAttributes;
@property (nonatomic) {?=*{?=IC}} contentObj;
@property (nonatomic) BOOL hasCodedCustomAttributes;
@property (nonatomic) BOOL hasKnownKeysDictionary;
@property (nonatomic) NSArray matchingHints;
- (BOOL)ic_isLocked;
- (BOOL)ic_hasDrawings;
- (BOOL)ic_hasScannedDocuments;
- (void)setIc_dataSourceIdentifier:;
- (void)setIc_hasAttachments:;
- (void)setIc_hasChecklists:;
- (void)setIc_hasDrawings:;
- (void)setIc_hasScannedDocuments:;
- (void)setIc_hasTags:;
- (void)setIc_isLocked:;
- (void)setIc_isShared:;
- (void)setIc_relatedModernNoteUniqueIdentifier:;
- (void)setIc_searchResultType:;
- (void)ic_populateValuesForSpecializedFields;
- (id)ic_relatedModernNoteUniqueIdentifier;
- (unsigned long long)ic_relevance;
- (unsigned long long)ic_searchResultType;
- (id)ic_dataSourceIdentifier;
- (BOOL)ic_isShared;
- (BOOL)ic_hasChecklists;
- (BOOL)ic_hasTags;
- (BOOL)ic_hasAttachments;
- (BOOL)wf_associateWithBundleIdentifier:;
- (id)accountType;
- (id)artist;
- (void)setComposer:;
- (id)city;
- (id)thoroughfare;
- (id)keywords;
- (id)fileSize;
- (id)postalCode;
- (id)playCount;
- (void)setPlayCount:;
- (id)ownerName;
- (void)setKeywords:;
- (id)composer;
- (id)suggestedInvocationPhrase;
- (id)path;
- (void)setContentType:;
- (void)setOwnerName:;
- (id)phoneNumbers;
- (void)setDocumentIdentifier:;
- (id)contentDescription;
- (void)setPinned:;
- (id)shortcutAvailability;
- (id)domainIdentifier;
- (id)filename;
- (id)focalLength;
- (void)setAlbum:;
- (void)setArtist:;
- (void)setTheme:;
- (id)country;
- (void)setKind:;
- (id)genre;
- (id)vendorName;
- (void)setColorSpace:;
- (id)emailAddresses;
- (void)setAllDay:;
- (void)setUniqueIdentifier:;
- (id)theme;
- (id)headline;
- (id)startDate;
- (id)altitude;
- (id)init;
- (id)containerIdentifier;
- (id)participants;
- (id)subject;
- (id)ownerIdentifier;
- (id)bundleIdentifier;
- (id)exposureMode;
- (void)setDownloading:;
- (void)setParticipants:;
- (id)rating;
- (id)isPlaceholder;
- (void)setAccountIdentifier:;
- (void)setTopic:;
- (id)comment;
- (id)fNumber;
- (void)setSubject:;
- (id)uniqueIdentifier;
- (id)accountIdentifier;
- (id)album;
- (id)isShared;
- (id)latitude;
- (void)setStartDate:;
- (void)setLanguages:;
- (id)pageCount;
- (id)downloadError;
- (id)languages;
- (void)setSpeed:;
- (void)setVersion:;
- (void)setSuggestedInvocationPhrase:;
- (id)publishers;
- (id)fullyFormattedAddress;
- (id)version;
- (void)setContainerTitle:;
- (void)setIsPlaceholder:;
- (void)setProtectionClass:;
- (void)setPath:;
- (id)profileName;
- (void)encodeWithCSCoder:;
- (id)contentType;
- (id)subThoroughfare;
- (id)colorSpace;
- (id)identifier;
- (id)applicationName;
- (id)containerTitle;
- (id)versionIdentifier;
- (id)orientation;
- (void)setExpirationDate:;
- (id)intentData;
- (id)kind;
- (id)exposureTime;
- (id)imageDirection;
- (void)setSubtitle:;
- (void)setWhiteBalance:;
- (void)setTitle:;
- (void)setApplicationCategories:;
- (id)contentURL;
- (id)initWithCoder:;
- (id)customAttributes;
- (unsigned long long)hash;
- (void)setFilename:;
- (id)requiredAttributes;
- (void)setPostalCode:;
- (id)protectionClass;
- (void)setDisplayName:;
- (void)setCountry:;
- (id)initWithAttributes:;
- (id)whiteBalance;
- (id)debugDescription;
- (id)displayName;
- (id)speed;
- (id)attributes;
- (void)setDownloadError:;
- (void)setContentDescription:;
- (void)setDuration:;
- (void)setExposureMode:;
- (void)setAltitude:;
- (id)expirationDate;
- (void)setBundleIdentifier:;
- (void)setLatitude:;
- (void)setEndDate:;
- (id)addedDate;
- (id)applicationCategories;
- (void)setAddedDate:;
- (void)encodeWithCoder:;
- (void)setRole:;
- (id)lensModel;
- (id)isDownloading;
- (id)endDate;
- (void)setTimestamp:;
- (void)setAttribute:forKey:;
- (void)setFileSize:;
- (id)title;
- (void)setPhoneNumbers:;
- (id)decoder;
- (void)setAperture:;
- (id)isPinned;
- (void)setLongitude:;
- (void)setAccountType:;
- (void)setHeadline:;
- (void).cxx_destruct;
- (void)setContainerIdentifier:;
- (id)documentIdentifier;
- (id)timestamp;
- (void)setFNumber:;
- (id)role;
- (void)setEmailAddresses:;
- (id)description;
- (id)information;
- (id)stateOrProvince;
- (void)setLastUsedDate:;
- (id)meteringMode;
- (id)topic;
- (id)authors;
- (id)lastUsedDate;
- (void)setShared:;
- (id)hashtags;
- (id)subtitle;
- (id)longitude;
- (id)adamID;
- (void)setExposureTime:;
- (id)isLocal;
- (id)bundleID;
- (id)duration;
- (void)setApplicationName:;
- (id)aperture;
- (void)setIdentifier:;
- (BOOL)isEqual:;
- (void)setURL:;
- (id)supportsNavigation;
- (id)userActivityType;
- (void)setPageCount:;
- (id)URL;
- (void)setOrientation:;
- (void)setLocal:;
- (void)setCity:;
- (id)copyWithZone:;
- (void)setGenre:;
- (void)setBundleID:;
- (id)mutableAttributes;
- (id)executableArchitectures;
- (id)alternateNames;
- (id)textContent;
- (void)setTextContent:;
- (void)setMediaTypes:;
- (id)mediaTypes;
- (id)creator;
- (void)setCreator:;
- (id)recipientNames;
- (id)instructions;
- (void)setInstructions:;
- (void)setComment:;
- (id)performers;
- (void)setPerformers:;
- (id)containerDisplayName;
- (void)setThoroughfare:;
- (void)setSubThoroughfare:;
- (void)setRating:;
- (void)setValue:forCustomKey:;
- (id)initWithItemContentType:;
- (id)isUploaded;
- (void)setOwnerIdentifier:;
- (void)setUploaded:;
- (id)pixelHeight;
- (id)pixelWidth;
- (id)instantMessageAddresses;
- (void)setNamedLocation:;
- (void)setFullyFormattedAddress:;
- (void)setStateOrProvince:;
- (id)collaborationIdentifier;
- (void)setCollaborationIdentifier:;
- (id)pageWidth;
- (id)groupPhotoPath;
- (id)portraitStaticScore;
- (void)setPortraitStaticScore:;
- (id)portraitFeatureVector;
- (void)setPortraitFeatureVector:;
- (id)portraitFeatureVectorVersion;
- (void)setPortraitFeatureVectorVersion:;
- (id)portraitNamedEntities;
- (void)setPortraitNamedEntities:;
- (void)setContentCreationDate:;
- (id)thumbnailURL;
- (id)thumbnailData;
- (void)setRecipientNames:;
- (void)setRecipientAddresses:;
- (void)setRankingHint:;
- (void)setPunchoutLabel:;
- (void)setBackgroundRunnable:;
- (void)setAuthors:;
- (void)setThumbnailURL:;
- (void)setThumbnailData:;
- (void)setPrimaryRecipients:;
- (void)setAlternateNames:;
- (void)setAccountHandles:;
- (void)setProfileName:;
- (void)setDomainIdentifier:;
- (void)setShortcutAvailability:;
- (id)dueDate;
- (void)setDueDate:;
- (id)allDay;
- (void)setInstantMessageAddresses:;
- (id)contentRating;
- (void)setContentRating:;
- (id)initWithAttributeSet:;
- (id)initWithMutableDictionary:;
- (id)initWithKnownKeysDictionary:;
- (id)initWithContentType:;
- (void)setUserCreated:;
- (id)isUserCreated;
- (void)setUserOwned:;
- (id)isUserOwned;
- (void)setUserCurated:;
- (id)isUserCurated;
- (id)rankingHint;
- (id)initWithSerializedAttributes:;
- (id)serializedAttributes;
- (BOOL)isValidAttributeSet;
- (id)attributeDictionary;
- (id)customAttributeDictionary;
- (void)_setValue:withClass:forKey:copy:;
- (void)_setValue:withClass:forKey:;
- (void)_setStringValue:forKey:;
- (void)_setDataValue:forKey:;
- (void)_setDateValue:forKey:;
- (void)_setNumberValue:forKey:;
- (void)_setURLValue:forKey:;
- (void)_setArrayValue:withItemClass:forKey:;
- (void)_setDictionaryValue:withValueClass:keyClass:forKey:;
- (id)_getNonNullValueForKey:;
- (BOOL)attributeIsDelete:;
- (id)attributeForKey:;
- (void)incrementAttributeValue:forKey:;
- (void)addAttributesFromAttributeSet:;
- (void)addAttributesFromDictionary:;
- (id)initWithDecoder:obj:;
- (void)setContentObj:obj:;
- (long long)searchableItemFlags;
- (void)setSearchableItemFlags:;
- (id)contentDecoder;
- (id)codedAttributes;
- (id)codedCustomAttributes;
- (id)contentObj;
- (BOOL)hasCodedCustomAttributes;
- (BOOL)hasKnownKeysDictionary;
- (id)matchingHints;
- (id)matchingHints;
- (void)setMatchingHints:;
- (void)setMatchingHints:;
- (void)setHTMLContentData:;
- (id)HTMLContentData;
- (void)setTextContentPieces:;
- (id)textContentPieces;
- (id)primaryRecipients;
- (void)setAdditionalRecipients:;
- (id)additionalRecipients;
- (void)setHiddenAdditionalRecipients:;
- (id)hiddenAdditionalRecipients;
- (void)setEmailHeaders:;
- (id)emailHeaders;
- (void)setRelatedUniqueIdentifier:;
- (id)relatedUniqueIdentifier;
- (void)setWeakRelatedUniqueIdentifier:;
- (id)weakRelatedUniqueIdentifier;
- (void)setContentURL:;
- (void)setThumbnailBundleID:;
- (id)thumbnailBundleID;
- (void)setThumbnailContentType:;
- (id)thumbnailContentType;
- (void)setDarkThumbnailURL:;
- (id)darkThumbnailURL;
- (id)accountHandles;
- (void)setMailboxIdentifiers:;
- (id)mailboxIdentifiers;
- (void)setMetadataModificationDate:;
- (id)metadataModificationDate;
- (void)setContentTypeTree:;
- (id)contentTypeTree;
- (void)setAuthorNames:;
- (id)authorNames;
- (void)setEditors:;
- (id)editors;
- (void)setAuthorEmailAddresses:;
- (id)authorEmailAddresses;
- (void)setRecipientEmailAddresses:;
- (id)recipientEmailAddresses;
- (void)setAuthorAddresses:;
- (id)authorAddresses;
- (id)recipientAddresses;
- (void)setProjects:;
- (id)projects;
- (void)setDownloadedDate:;
- (id)downloadedDate;
- (void)setContentSources:;
- (id)contentSources;
- (void)setCopyright:;
- (id)copyright;
- (id)contentCreationDate;
- (void)setContentModificationDate:;
- (id)contentModificationDate;
- (void)setContactKeywords:;
- (id)contactKeywords;
- (void)setPixelHeight:;
- (void)setPixelWidth:;
- (void)setPixelCount:;
- (id)pixelCount;
- (void)setBitsPerSample:;
- (id)bitsPerSample;
- (void)setFlashOn:;
- (id)isFlashOn;
- (void)setFocalLength:;
- (void)setFocalLength35mm:;
- (id)isFocalLength35mm;
- (void)setAcquisitionMake:;
- (id)acquisitionMake;
- (void)setAcquisitionModel:;
- (id)acquisitionModel;
- (void)setCameraOwner:;
- (id)cameraOwner;
- (void)setLensModel:;
- (void)setISOSpeed:;
- (id)ISOSpeed;
- (void)setLayerNames:;
- (id)layerNames;
- (void)setResolutionWidthDPI:;
- (id)resolutionWidthDPI;
- (void)setResolutionHeightDPI:;
- (id)resolutionHeightDPI;
- (void)setEXIFVersion:;
- (id)EXIFVersion;
- (void)setEXIFGPSVersion:;
- (id)EXIFGPSVersion;
- (void)setCodecs:;
- (id)codecs;
- (void)setStreamable:;
- (id)isStreamable;
- (void)setTotalBitRate:;
- (id)totalBitRate;
- (void)setVideoBitRate:;
- (id)videoBitRate;
- (void)setAudioBitRate:;
- (id)audioBitRate;
- (void)setDeliveryType:;
- (id)deliveryType;
- (void)setHasAlphaChannel:;
- (id)hasAlphaChannel;
- (void)setRedEyeOn:;
- (id)isRedEyeOn;
- (void)setMeteringMode:;
- (void)setMaxAperture:;
- (id)maxAperture;
- (void)setExposureProgram:;
- (id)exposureProgram;
- (void)setExposureTimeString:;
- (id)exposureTimeString;
- (void)setSupportsNavigation:;
- (void)setActionIdentifiers:;
- (id)actionIdentifiers;
- (void)setSharedItemContentType:;
- (id)sharedItemContentType;
- (void)setImageDirection:;
- (id)namedLocation;
- (void)setGPSTrack:;
- (id)GPSTrack;
- (void)setGPSStatus:;
- (id)GPSStatus;
- (void)setGPSMeasureMode:;
- (id)GPSMeasureMode;
- (void)setGPSDOP:;
- (id)GPSDOP;
- (void)setGPSMapDatum:;
- (id)GPSMapDatum;
- (void)setGPSDestLatitude:;
- (id)GPSDestLatitude;
- (void)setGPSDestLongitude:;
- (id)GPSDestLongitude;
- (void)setGPSDestBearing:;
- (id)GPSDestBearing;
- (void)setGPSDestDistance:;
- (id)GPSDestDistance;
- (void)setGPSProcessingMethod:;
- (id)GPSProcessingMethod;
- (void)setGPSAreaInformation:;
- (id)GPSAreaInformation;
- (void)setGPSDateStamp:;
- (id)GPSDateStamp;
- (void)setGPSDifferental:;
- (id)GPSDifferental;
- (void)setAudioSampleRate:;
- (id)audioSampleRate;
- (void)setAudioChannelCount:;
- (id)audioChannelCount;
- (void)setTempo:;
- (id)tempo;
- (void)setKeySignature:;
- (id)keySignature;
- (void)setTimeSignature:;
- (id)timeSignature;
- (void)setAudioEncodingApplication:;
- (id)audioEncodingApplication;
- (void)setLyricist:;
- (id)lyricist;
- (void)setAudioTrackNumber:;
- (id)audioTrackNumber;
- (void)setRecordingDate:;
- (id)recordingDate;
- (void)setMusicalGenre:;
- (id)musicalGenre;
- (void)setGeneralMIDISequence:;
- (id)isGeneralMIDISequence;
- (void)setOrganizations:;
- (id)organizations;
- (void)setRights:;
- (id)rights;
- (void)setPublishers:;
- (void)setContributors:;
- (id)contributors;
- (void)setCoverage:;
- (id)coverage;
- (void)setAudiences:;
- (id)audiences;
- (void)setPageWidth:;
- (void)setPageHeight:;
- (id)pageHeight;
- (void)setSecurityMethod:;
- (id)securityMethod;
- (void)setEncodingApplications:;
- (id)encodingApplications;
- (void)setCompletionDate:;
- (id)completionDate;
- (void)setImportantDates:;
- (id)importantDates;
- (void)setRatingDescription:;
- (id)ratingDescription;
- (void)setSupportsPhoneCall:;
- (id)supportsPhoneCall;
- (void)setPotentialEventMessage:;
- (id)isPotentialEventMessage;
- (void)setFinderComment:;
- (id)finderComment;
- (void)setCalendarHolidayIdentifier:;
- (id)calendarHolidayIdentifier;
- (void)setFontNames:;
- (id)fontNames;
- (void)setAppleLoopsRootKey:;
- (id)appleLoopsRootKey;
- (void)setAppleLoopsKeyFilterType:;
- (id)appleLoopsKeyFilterType;
- (void)setAppleLoopsLoopMode:;
- (id)appleLoopsLoopMode;
- (void)setAppleLoopDescriptors:;
- (id)appleLoopDescriptors;
- (void)setMusicalInstrumentCategory:;
- (id)musicalInstrumentCategory;
- (void)setMusicalInstrumentName:;
- (id)musicalInstrumentName;
- (void)setExecutableArchitectures:;
- (void)setExecutablePlatform:;
- (id)executablePlatform;
- (void)setVendorName:;
- (void)setApplicationManaged:;
- (id)isApplicationManaged;
- (void)setSupportFileType:;
- (id)supportFileType;
- (void)setInformation:;
- (void)setDirector:;
- (id)director;
- (void)setProducer:;
- (id)producer;
- (void)setOriginalFormat:;
- (id)originalFormat;
- (void)setOriginalSource:;
- (id)originalSource;
- (void)setLikelyJunk:;
- (id)isLikelyJunk;
- (void)setProviderDataTypes:;
- (id)providerDataTypes;
- (void)setProviderFileTypes:;
- (id)providerFileTypes;
- (void)setProviderDataTypeIdentifiers:;
- (id)providerDataTypeIdentifiers;
- (void)setProviderFileTypeIdentifiers:;
- (id)providerFileTypeIdentifiers;
- (void)setProviderInPlaceFileTypeIdentifiers:;
- (id)providerInPlaceFileTypeIdentifiers;
- (void)setCalendarDelegateIdentifier:;
- (id)calendarDelegateIdentifier;
- (void)setAuthorPhotosPersonIdentifiers:;
- (id)authorPhotosPersonIdentifiers;
- (void)setRecipientPhotosPersonIdentifiers:;
- (id)recipientPhotosPersonIdentifiers;
- (void)setRichLinkTitle:;
- (id)richLinkTitle;
- (void)setRichLinkID:;
- (id)richLinkID;
- (void)setRichLinkURL:;
- (id)richLinkURL;
- (id)HTMLContentDataNoCopy;
- (id)textContentNoCopy;
- (void)setDeletedWithRelatedUniqueIdentifier:;
- (id)deletedWithRelatedUniqueIdentifier;
- (void)setTextSelected:;
- (id)textSelected;
- (void)setUserTags:;
- (id)userTags;
- (void)setAlbumPersistentID:;
- (id)albumPersistentID;
- (void)setAdamID:;
- (void)setExtendedContentRating:;
- (id)extendedContentRating;
- (void)setFileIdentifier:;
- (id)fileIdentifier;
- (void)setParentFileIdentifier:;
- (id)parentFileIdentifier;
- (void)setDataOwnerType:;
- (id)dataOwnerType;
- (void)setExistingThread:;
- (id)isExistingThread;
- (void)setPartiallyDownloaded:;
- (id)isPartiallyDownloaded;
- (void)setQueryResultMatchedFields:;
- (id)queryResultMatchedFields;
- (id)contentCreationDateHour;
- (id)contentCreationDateMonth;
- (id)contentCreationDateYear;
- (id)contentCreationDateWeekday;
- (id)contentCreationDateWeekdayOrdinal;
- (id)contentCreationDateWeekOfMonth;
- (id)contentCreationDateWeekOfYear;
- (id)contentModificationDateHour;
- (id)contentModificationDateMonth;
- (id)contentModificationDateYear;
- (id)contentModificationDateWeekday;
- (id)contentModificationDateWeekdayOrdinal;
- (id)contentModificationDateWeekOfMonth;
- (id)contentModificationDateWeekOfYear;
- (void)setUserActivityType:;
- (id)contentSnippet;
- (void)setQueryResultRelevance:;
- (id)queryResultRelevance;
- (void)setRelatedAppBundleIdentifier:;
- (id)relatedAppBundleIdentifier;
- (void)setHashtags:;
- (void)setHasLPMedia:;
- (id)hasLPMedia;
- (void)setLPMediaPaths:;
- (id)LPMediaPaths;
- (void)setGroupPhotoPath:;
- (void)setSyndicationStatus:;
- (id)syndicationStatus;
- (void)setSyndicatedContentServerDate:;
- (id)syndicatedContentServerDate;
- (void)setRequiresImport:;
- (id)requiresImport;
- (void)setImportSandboxExtension:;
- (id)importSandboxExtension;
- (void)setVisualAssetPriority:;
- (id)visualAssetPriority;
- (void)setAttachmentNames:;
- (id)attachmentNames;
- (void)setAttachmentTypes:;
- (id)attachmentTypes;
- (void)setAttachmentPaths:;
- (id)attachmentPaths;
- (void)setMailAttachmentNames:;
- (id)mailAttachmentNames;
- (void)setMailAttachmentTypes:;
- (id)mailAttachmentTypes;
- (void)setMailAttachmentKinds:;
- (id)mailAttachmentKinds;
- (void)setMailDateReceived:;
- (id)mailDateReceived;
- (void)setMailDateLastViewed:;
- (id)mailDateLastViewed;
- (void)setMailFlagged:;
- (id)mailFlagged;
- (void)setMailFlagColor:;
- (id)mailFlagColor;
- (void)setMailRead:;
- (id)mailRead;
- (void)setMailRepliedTo:;
- (id)mailRepliedTo;
- (void)setMailPriority:;
- (id)mailPriority;
- (void)setMailGMailLabels:;
- (id)mailGMailLabels;
- (void)setMailMessageID:;
- (id)mailMessageID;
- (void)setMailCategory:;
- (id)mailCategory;
- (void)setMailConversationID:;
- (id)mailConversationID;
- (void)setReaderView:;
- (id)isReaderView;
- (void)setTextContentDataSource:;
- (id)textContentDataSource;
- (id)autocompleteTriggers;
- (void)setAutocompleteTriggers:;
- (void)setFileProviderID:;
- (id)fileProviderID;
- (void)setFileItemID:;
- (id)fileItemID;
- (void)setFPFilename:;
- (id)FPFilename;
- (id)parentFileItemID;
- (void)setParentFileItemID:;
- (void)setLastEditorName:;
- (id)lastEditorName;
- (void)setLastEditorIdentifier:;
- (id)lastEditorIdentifier;
- (void)setFileProviderDomainIdentifier:;
- (id)fileProviderDomainIdentifier;
- (void)setFileProviderDomaindentifier:;
- (id)fileProviderDomaindentifier;
- (void)setFileProviderUserInfoKeys:;
- (id)fileProviderUserInfoKeys;
- (void)setFileProviderUserInfoValues:;
- (id)fileProviderUserInfoValues;
- (void)setTrashed:;
- (id)isTrashed;
- (void)setUploading:;
- (id)isUploading;
- (void)setUploadError:;
- (id)uploadError;
- (void)setExtraData:;
- (id)extraData;
- (void)setFavoriteRank:;
- (id)favoriteRank;
- (void)setSubItemCount:;
- (id)subItemCount;
- (void)setSharedItemCurrentUserRole:;
- (id)sharedItemCurrentUserRole;
- (void)setDownloadingStatus:;
- (id)downloadingStatus;
- (void)setVersionIdentifier:;
- (id)userSharedSentDate;
- (id)userSharedSentSender;
- (id)userSharedSentSenderHandle;
- (id)userSharedSentRecipient;
- (id)userSharedSentRecipientHandle;
- (id)userSharedSentTransport;
- (id)userSharedReceivedDate;
- (id)userSharedReceivedSender;
- (id)userSharedReceivedSenderHandle;
- (id)userSharedReceivedRecipient;
- (id)userSharedReceivedRecipientHandle;
- (id)userSharedReceivedTransport;
- (id)userPrintedUserHandle;
- (id)userPrintedDate;
- (id)userDownloadedUserHandle;
- (id)userDownloadedDate;
- (id)userModifiedUserHandle;
- (id)userModifiedDate;
- (id)userCreatedUserHandle;
- (id)userCreatedDate;
- (void)_markAs:date:sender:senderHandle:recipients:recipientHandles:transport:;
- (void)markAsSent:sender:senderHandle:recipients:recipientHandles:transport:;
- (void)markAsReceived:sender:senderHandle:recipients:recipientHandles:transport:;
- (void)_markAs:userHandle:dateKey:userHandleKey:;
- (void)markAsPrinted:userHandle:;
- (void)markAsDownloaded:userHandle:;
- (void)markAsModified:userHandle:;
- (void)markAsCreated:userHandle:;
- (void)_standardizeMarkAs;
- (void)setIntentData:;
- (id)backgroundRunnable;
- (id)punchoutLabel;
- (id)lastApplicationLaunchedDate;
- (void)setLastApplicationLaunchedDate:;
- (void)setPhotosResultType:;
- (id)photosResultType;
- (void)setPhotosCollectionSubtitle:;
- (id)photosCollectionSubtitle;
- (void)setPhotosCollectionResultCount:;
- (id)photosCollectionResultCount;
- (void)setPhotosCollectionKeyAssetUUID:;
- (id)photosCollectionKeyAssetUUID;
- (void)setPhotosFavorited:;
- (id)photosFavorited;
- (void)setPhotosMemoryTitle:;
- (id)photosMemoryTitle;
- (void)setPhotosBusinessNames:;
- (id)photosBusinessNames;
- (void)setPhotosBusinessCategories:;
- (id)photosBusinessCategories;
- (void)setPhotosMediaTypes:;
- (id)photosMediaTypes;
- (void)setPhotosPeople:;
- (id)photosPeople;
- (void)setPhotosEventNames:;
- (id)photosEventNames;
- (void)setPhotosSeasons:;
- (id)photosSeasons;
- (void)setPhotosHolidays:;
- (id)photosHolidays;
- (void)setPhotosSceneIdentifiers:;
- (id)photosSceneIdentifiers;
- (void)setPhotosScenes:;
- (id)photosScenes;
- (void)setPhotosMeanings:;
- (id)photosMeanings;
- (void)setPhotosEventCategories:;
- (id)photosEventCategories;
- (void)setPhotosEventPerformers:;
- (id)photosEventPerformers;
- (void)setPhotosSceneClassifications:;
- (id)photosSceneClassifications;
- (void)setAestheticScore:;
- (id)aestheticScore;
- (void)setCurationScore:;
- (id)curationScore;
- (void)setIsProResVideo:;
- (id)isProResVideo;
- (void)setSavingApplication:;
- (id)savingApplication;
- (void)setSavingApplicationBundleIdentifier:;
- (id)savingApplicationBundleIdentifier;
- (void)setHasTopMomentScore:;
- (id)hasTopMomentScore;
- (void)setIsCinematicVideo:;
- (id)isCinematicVideo;
- (void)setEligibleForPhotosProcessing:;
- (id)eligibleForPhotosProcessing;
- (void)setPhotosLibraryName:;
- (id)photosLibraryName;
- (void)setPhotosContributor:;
- (id)photosContributor;
- (void)setPhotosAcquisitionMake:;
- (id)photosAcquisitionMake;
- (void)setPhotosAcquisitionModel:;
- (id)photosAcquisitionModel;
- (void)setPhotosDuration:;
- (id)photosDuration;
- (void)setPhotosContentCreationDate:;
- (id)photosContentCreationDate;
- (void)setPhotosContentType:;
- (id)photosContentType;
- (void)setPhotosTitle:;
- (id)photosTitle;
- (void)setPhotosContentDescription:;
- (id)photosContentDescription;
- (void)setPhotosDisplayName:;
- (id)photosDisplayName;
- (void)setPhotosFilename:;
- (id)photosFilename;
- (void)setPhotosKeywords:;
- (id)photosKeywords;
- (void)setPhotosContainerIdentifier:;
- (id)photosContainerIdentifier;
- (void)setPhotosContentRating:;
- (id)photosContentRating;
- (void)setPhotosAestheticScore:;
- (id)photosAestheticScore;
- (void)setPhotosCurationScore:;
- (id)photosCurationScore;
- (void)setPhotosSavingApplication:;
- (id)photosSavingApplication;
- (void)setPhotosSavingApplicationBundleIdentifier:;
- (id)photosSavingApplicationBundleIdentifier;
- (void)setPhotosHasTopMomentScore:;
- (id)photosHasTopMomentScore;
- (void)setPhotosIsProResVideo:;
- (id)photosIsProResVideo;
- (void)setPhotosTimeZoneName:;
- (id)photosTimeZoneName;
- (void)setPhotosTimeZoneOffset:;
- (id)photosTimeZoneOffset;
- (void)setPhotosInferredTimeZoneOffset:;
- (id)photosInferredTimeZoneOffset;
- (void)setPhotosDonationState:;
- (id)photosDonationState;
- (void)setPhotosCharacterRecognitionAnalysisVersion:;
- (id)photosCharacterRecognitionAnalysisVersion;
- (void)setPhotosFaceAnalysisVersion:;
- (id)photosFaceAnalysisVersion;
- (void)setPhotosMediaAnalysisVersion:;
- (id)photosMediaAnalysisVersion;
- (void)setPhotosSceneAnalysisVersion:;
- (id)photosSceneAnalysisVersion;
- (void)setPhotosIsCinematicVideo:;
- (id)photosIsCinematicVideo;
- (id)photosTextContentPieces;
- (void)setPhotosTextContentPieces:;
- (id)lastMotionActivityState;
- (void)setLastMotionActivityState:;
- (id)messageSuggestedContactPhotoPath;
- (void)setMessageSuggestedContactPhotoPath:;
- (id)messageSuggestedContactName;
- (void)setMessageSuggestedContactName:;
- (id)isZombie;
- (void)setIsZombie:;
- (void)setContainerDisplayName:;
- (void)setContainerOrder:;
- (id)containerOrder;
- (id)valueForCustomKey:;
- (void)encodeWithCSCoder:includeText:;
- (void)setInstantAnswers:;
- (id)instantAnswers;
- (void)setDonatedEvent:;
- (id)donatedEvent;
+ (id)ic_customAttributeKeyDictionary;
+ (id)ic_customAttributeKeyWithName:searchable:searchableByDefault:unique:multiValued:;
+ (id)ic_specializedIndexFieldAttributeKeyForStringField:;
+ (id)ic_dataSourceIdentifierCustomKey;
+ (id)ic_searchResultTypeCustomKey;
+ (id)ic_itemIsLockedCustomKey;
+ (id)ic_itemIsSharedCustomKey;
+ (id)ic_relatedModernNoteUniqueIdentifierCustomKey;
+ (id)ic_itemHasChecklistsCustomKey;
+ (id)ic_itemHasTagsCustomKey;
+ (id)ic_itemHasDrawingsCustomKey;
+ (id)ic_itemHasScannedDocumentsCustomKey;
+ (id)ic_itemHasAttachmentsCustomKey;
+ (BOOL)supportsSecureCoding;
+ (id)_requiredAttributesForContentType:;
+ (id)_allKeys;
+ (id)_sharedAttributeKeySet;
@end
